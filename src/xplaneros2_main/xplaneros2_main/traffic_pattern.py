# Import libraries
import sys
import time
import numpy as np

# Insert path
sys.path.insert(0, '/home/uas/Documents/blue/envs/XPlaneConnect/Python3/src')

# Import Xplane Connect
import xpc

# Import ROS
import rclpy
from rclpy.node import Node

# Import Interfaces
from xplane_interfaces.msg import UAVType, UAVLocalState, UAVGlobalState, UAVControl, UAVAutoPilot

## TODO

# Takeoff behavior

# Keep head steady while takeoff

# Parking brake service

class Traffic_Pattern(Node):

	def __init__(self):


		# Initialize takeoff node
		super().__init__('traffic_pattern_node')

		# Initialize teh connection
		self.uas = xpc.XPlaneConnect()

		# Initialize state messages
		self.uav_type, self.uav_local_state, self.uav_global_state = UAVType(), UAVLocalState(), UAVGlobalState()

		# Initialize control messages
		self.uav_control, self.uav_autopilot = UAVControl(), UAVAutoPilot()

		# Control publisher
		self.uav_control_pub = self.create_publisher(UAVControl, '/xplane/uav/control', 1)

		# UAV Type subscription
		self.uav_type_subscriber = self.create_subscription(UAVType, '/xplane/uav/type', self.uav_type_cb, 1)

		# Local state subscriber
		self.uav_local_state_subscriber = self.create_subscription(UAVLocalState, '/xplane/uav/local_state', self.uav_local_state_cb, 1)

		# Global state subscriber
		self.uav_global_state_subscriber = self.create_subscription(UAVGlobalState, '/xplane/uav/global_state', self.uav_global_state_cb, 1)

		self.autopilot_publisher = self.create_publisher(UAVAutoPilot, '/xplane/uav/autopilot_pub', 1)

		# Minimum takeoff speeds with respect to the vehicle
		self.min_takeoff_speeds = {"C172":55, "SF50":75, "BE9L":70, "B738":90, "B744":130, "MD82":140, "":100}

		# Grace time
		self.start_time, self.wait_time = time.time(), 2

		# Getting initial heading
		self.initial_heading = self.uas.getPOSI()[5]

		# Reference taakeoff, cruise and landing pitches 
		self.takeoff_pitch, self.cruise_pitch, self.land_pitch = 8, 1, -4

		# Cruise altitude and takeoff speed references
		self.cruise_alt_goal, self.min_takeoff_speed = 400, 45

		# Takeoff and cruise speeds
		self.takeoff_speed, self.cruise_speed = 250, 250

		# PID Values
		self.kpe, self.kpa, self.kpr, self.kpt = 0.02,  0.05,  0.09,   0.01
		self.kde, self.kda, self.kdr, self.kdt  = 0.00, 0.00,  0.00,  0
		self.kie, self.kia, self.kir, self.kit = 0.000, 0.000, 0.00, 0

		# PID Arrays
		self.kp = [self.kpe, self.kpa, self.kpr, self.kpt]
		self.kd = [self.kde, self.kda, self.kdr, self.kdt]
		self.ki = [self.kie, self.kia, self.kir, self.kit]

		# PID Numpy 
		self.kp, self.kd, self.kr = np.array(self.kp), np.array(self.kd), np.array(self.ki)

		initial_heading = self.uas.getPOSI()[5]

		print("Initial heading ", initial_heading)

		# Errors, References and States
		self.prev_errors, self.sum_errors, self.references, self.current_states = [0,0,0,0], [0,0,0,0], [self.takeoff_pitch,0,initial_heading, self.min_takeoff_speed], [0,0,0,0]

		# Creating numpy arrays
		self.prev_errors, self.references, self.current_states = np.array(self.prev_errors), np.array(self.references), np.array(self.current_states)

		# Control variables
		self.throttle, self.elevator, self.aileron, self.rudder = 3, 0, 1, 2

		self.pid_controls = [0,0,0,0]

		self.uav_control.throttle = 0.0

		self.pitch, self.roll, self.yaw = 0, 1, 2

		self.landing_gear_up_altitude = 900

		self.landing_datarefs = ['sim/cockpit2/controls/gear_handle_down']

		self.fsm_states = ["Takeoff", "UpWind", "CrossWind", "DownWind", "BaseLeg", "Final", "FlareOut", "Landing"]

		self.desired_airspeeds = [230.0, 230.0, 210.0, 210.0, 200.0, 130.0, 100.0, 0.0]

		self.desired_vertical_velocities = [500.0, 700.0, 10.0, 100.0, 100.0, -200.0, -50.0, 0.0]

		new_angle = self.angle_normalization(initial_heading)

		self.yaw_angles = [new_angle, new_angle]

		for i in range(4):
			new_angle -= 90
			new_angle = self.angle_normalization(new_angle)
			self.yaw_angles.append(new_angle)

		self.yaw_angles.append(new_angle)
		self.yaw_angles.append(new_angle)

		self.fsm_current_state = 0

		# self.cruise_duration = 60

		# self.phases = ['takeoff', 'cruise']
		# self.phase = 0

		time.sleep(5)

		self.initial_x, self.initial_z = self.uas.getDREF("sim/flightmodel/position/local_x")[0], self.uas.getDREF("sim/flightmodel/position/local_z")[0]
		

		self.time_period = 0.01

		self.timer = self.create_timer(self.time_period, self.timer_loop)

	def angle_normalization(self, angle):
		if angle < 0:
			angle += 360

		return angle


	def uav_type_cb(self, uav_type):

		self.uav_type = uav_type


	def uav_local_state_cb(self, uav_local_state):

		self.uav_local_state = uav_local_state

	
	def uav_global_state_cb(self, uav_global_state):

		self.uav_global_state = uav_global_state

	

	def PID_Control(self):

		self.current_states[self.pitch] = self.uav_local_state.pitch

		self.current_states[self.roll] = self.uav_local_state.roll

		self.current_states[self.yaw] = self.uav_local_state.yaw

		self.pid_controls =  self.kp*(self.references-self.current_states)





	def Takeoff(self):

		self.uas.sendDREF("sim/flightmodel/controls/parkbrake", 0)

		self.uas.sendDREF("sim/cockpit/autopilot/autopilot_mode", 2)

		self.uav_autopilot.heading, self.uav_autopilot.altitude, self.uav_autopilot.airspeed, self.uav_autopilot.vertical_velocity = self.yaw_angles[self.fsm_current_state], 25000.0, self.desired_airspeeds[self.fsm_current_state], 500.0

		self.autopilot_publisher.publish(self.uav_autopilot)

		print("Takeoff: AGL Altitude (feet) ", (self.uav_global_state.altitude_agl*3.28))

		# self.PID_Control()

		# if self.uav_local_state.airspeed < self.min_takeoff_speeds[self.uav_type.id]:

		# 	self.uav_control.throttle = 1.0

		# 	self.uav_control.rudder = self.pid_controls[self.yaw]

		# 	print("Takeoff: Tyring to achieve min takeoff speed", self.uav_local_state.airspeed)

		# 	#print("Vehicle State ", "Lat : ", self.uav_global_state.lattitude, "Lon : ", self.uav_global_state.longitude, " Alt : ", self.uav_global_state.altitude_msl, " AirSpeed ", self.uav_local_state.airspeed)

		# if (self.uav_local_state.airspeed > self.min_takeoff_speeds[self.uav_type.id]):

		# 	self.uav_control.elevator = self.pid_controls[self.elevator]

		# 	self.uav_control.rudder = self.pid_controls[self.yaw]

		# 	self.uav_control.aileron = self.pid_controls[self.aileron]

		# 	#print("Vehicle State ", "Lat : ", self.uav_global_state.lattitude, "Lon : ", self.uav_global_state.longitude, " Alt : ", self.uav_global_state.altitude_msl, " AirSpeed ", self.uav_local_state.airspeed)

		# 	print("Takeoff: Applying elevators", self.current_states[self.pitch])

		if (self.uav_global_state.altitude_agl*3.28) > 500:

			self.uav_control.throttle = 0.6

			self.fsm_current_state += 1

		#self.uav_control_pub.publish(self.uav_control)


	def UpWind(self):

		self.uas.sendDREF("sim/cockpit/autopilot/autopilot_mode", 2)

		self.uav_autopilot.heading, self.uav_autopilot.altitude, self.uav_autopilot.airspeed, self.uav_autopilot.vertical_velocity = self.yaw_angles[self.fsm_current_state], 25000.0, self.desired_airspeeds[self.fsm_current_state], 700.0

		self.autopilot_publisher.publish(self.uav_autopilot)

		print("UpWind: AGL Altitude (feet) ", (self.uav_global_state.altitude_agl*3.28))

		if (self.uav_global_state.altitude_agl*3.28) > 1200:
			self.fsm_current_state += 1


	def CrossWind(self):

		self.uav_autopilot.heading, self.uav_autopilot.airspeed, self.uav_autopilot.vertical_velocity = self.yaw_angles[self.fsm_current_state], self.desired_airspeeds[self.fsm_current_state], 10.0

		self.autopilot_publisher.publish(self.uav_autopilot)

		print("CrossWind : Lateral Distance (m) ", abs(self.uav_local_state.local_z - self.initial_z), self.uav_local_state.local_z, self.initial_z)

		if abs(self.uav_local_state.local_z - self.initial_z) > 6000:
			self.fsm_current_state += 1

			if self.uav_local_state.local_x < self.initial_x:

				self.xcoord_negative = True
			else:
				self.xcoord_negative = False

	def DownWind(self):

		self.uav_autopilot.heading, self.uav_autopilot.airspeed, self.uav_autopilot.vertical_velocity = self.yaw_angles[self.fsm_current_state], self.desired_airspeeds[self.fsm_current_state], 100.0

		self.autopilot_publisher.publish(self.uav_autopilot)

		print("DownWind : Longitudunal Distance (m) ", abs(self.uav_local_state.local_x - self.initial_x), self.yaw_angles[self.fsm_current_state])

		if self.xcoord_negative:
			if self.uav_local_state.local_x > (self.initial_x+20000):
				self.fsm_current_state += 1
		else:
			if self.uav_local_state.local_x < (self.initial_x-20000):
				self.fsm_current_state += 1	

		# if abs(self.uav_local_state.local_x - self.initial_x) < 30000:
		# 	self.fsm_current_state += 1


	def BaseLeg(self):

		self.uav_autopilot.heading, self.uav_autopilot.airspeed, self.uav_autopilot.vertical_velocity = self.yaw_angles[self.fsm_current_state], self.desired_airspeeds[self.fsm_current_state], 100.0

		self.autopilot_publisher.publish(self.uav_autopilot)

		print("BaseLeg : Lateral Distance (m) ", abs(self.uav_local_state.local_z - self.initial_z), self.uav_local_state.local_z, self.initial_z)

		if abs(self.uav_local_state.local_z - self.initial_z) < 3300:
			self.fsm_current_state += 1

			time_to_reach_runway_sec = abs(self.uav_local_state.local_x-self.initial_x)/(self.desired_airspeeds[self.fsm_current_state]*0.514)
			time_to_reach_runway_min = time_to_reach_runway_sec/60
			self.desired_vertical_velocities[self.fsm_current_state] = (-1)*(self.uav_global_state.altitude_agl/time_to_reach_runway_min)

	def FinalLeg(self):

		self.uav_autopilot.heading, self.uav_autopilot.airspeed, self.uav_autopilot.vertical_velocity = self.yaw_angles[self.fsm_current_state], self.desired_airspeeds[self.fsm_current_state], -400.0

		self.autopilot_publisher.publish(self.uav_autopilot)

		print("FinalLeg : Lateral Distance (m) ", abs(self.uav_local_state.local_x - self.initial_x), abs(self.uav_local_state.local_z - self.initial_z))

		if abs(self.uav_local_state.local_x-self.initial_x) < 1200:
			self.fsm_current_state += 1

	def Flare(self):

		self.uav_autopilot.heading, self.uav_autopilot.airspeed, self.uav_autopilot.vertical_velocity = self.yaw_angles[self.fsm_current_state], self.desired_airspeeds[self.fsm_current_state], -100.0

		self.autopilot_publisher.publish(self.uav_autopilot)

		print("Flareout: AGL Altitude (feet) ", (self.uav_global_state.altitude_agl*3.28))

		if self.uav_global_state.altitude_agl < 1:
			self.fsm_current_state += 1

	def Land(self):

		self.uav_autopilot.heading, self.uav_autopilot.airspeed, self.uav_autopilot.vertical_velocity = self.yaw_angles[self.fsm_current_state], self.desired_airspeeds[self.fsm_current_state], 0.0

		self.autopilot_publisher.publish(self.uav_autopilot)

		print("Land: AGL Altitude (feet) ", (self.uav_global_state.altitude_agl*3.28))

		self.uas.sendDREF("sim/flightmodel/controls/parkbrake", 1)




	

	def timer_loop(self):

		if self.fsm_states[self.fsm_current_state] == "Takeoff":

			self.Takeoff()

		elif self.fsm_states[self.fsm_current_state] == "UpWind":

			self.UpWind()

		elif self.fsm_states[self.fsm_current_state] == "CrossWind":

			self.CrossWind()

		elif self.fsm_states[self.fsm_current_state] == "DownWind":

			self.DownWind()

		elif self.fsm_states[self.fsm_current_state] == "BaseLeg":

			self.BaseLeg()

		elif self.fsm_states[self.fsm_current_state] == "Final":

			self.FinalLeg()

		elif self.fsm_states[self.fsm_current_state] == "FlareOut":

			self.Flare()

		elif self.fsm_states[self.fsm_current_state] == "Landing":

			self.Land()


		# if self.phase == 0:

		# 	self.references[self.elevator] = self.takeoff_pitch

		# 	self.Takeoff()

		# 	#print("Rudder control ", self.uav_control.rudder, self.uav_state.heading, self.init_head)

		# 	#self.uav_control_pub.publish(self.uav_control)

		# elif self.phase == 1:

		# 	self.references[self.pitch] == self.cruise_pitch

		# 	self.Cruise()

		# 	#self.uav_control_pub.publish(self.uav_control)

		# else:

		# 	print("Crusing done")

		# 	time.sleep(5)


def main(args = None):

	rclpy.init(args=args)
	
	traffic_pattern_node = Traffic_Pattern()

	rclpy.spin(traffic_pattern_node)


if __name__ == '__main__':
	main()