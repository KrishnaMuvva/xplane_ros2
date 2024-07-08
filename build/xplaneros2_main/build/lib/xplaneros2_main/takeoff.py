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

class Takeoff(Node):

	def __init__(self):


		# Initialize takeoff node
		super().__init__('takeoff_node')

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

		# self.cruise_duration = 60

		# self.phases = ['takeoff', 'cruise']
		# self.phase = 0

		time.sleep(5)
		

		self.time_period = 0.01

		self.timer = self.create_timer(self.time_period, self.timer_loop)


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



	# def Takeoff(self):


	# 	# self.cruise_alt_goal = cruise_alt_goal

	# 	# self.min_takeoff_speed = min_takeoff_speed

	# 	self.uas.sendDREF("sim/flightmodel/controls/parkbrake", 0)

	# 	self.PID_Control()

		
	# 	if self.uav_local_state.airspeed < self.min_takeoff_speeds[self.uav_type.id]:

	# 		self.uav_control.throttle = 1.0

	# 		self.uav_control.rudder = self.PIDControls[self.yaw]

	# 		print("Takeoff : Trying to achieve min takeoff velocity ", self.uav_state.airspeed, self.min_takeoff_speed)

	# 		#print("Yaw ", self.uav_control.rudder, self.references[self.yaw], self.uav_state.heading)

	# 		#self.uav_control_pub.publish(self.uav_control)

		
	# 	if (self.uav_local_state.airspeed > self.min_takeoff_speeds[self.uav_type.id]) and (self.uav_state.altitude < self.cruise_alt_goal):

	# 		self.uav_control.elevator = self.PIDControls[self.pitch]

	# 		self.uav_control.rudder = self.PIDControls[self.yaw]

	# 		print("Takeoff : Climbinbg ", self.uav_state.altitude, self.uav_control.elevator)

	# 		#self.uav_control_pub.publish(self.uav_control)

	# 	if self.uav_state.altitude > self.cruise_alt_goal:

	# 		self.phase = 1

	# 		self.cruise_start = time.time()





	def Takeoff(self):

		self.uas.sendDREF("sim/flightmodel/controls/parkbrake", 0)

		self.PID_Control()

		if self.uav_local_state.airspeed < self.min_takeoff_speeds[self.uav_type.id]:

			self.uav_control.throttle = 1.0

			self.uav_control.rudder = self.pid_controls[self.yaw]

			#print("Tyring to achieve min takeoff speed", self.uav_local_state.airspeed)

			print("Vehicle State ", "Lat : ", self.uav_global_state.lattitude, "Lon : ", self.uav_global_state.longitude, " Alt : ", self.uav_global_state.altitude_msl, " AirSpeed ", self.uav_local_state.airspeed)

		if (self.uav_local_state.airspeed > self.min_takeoff_speeds[self.uav_type.id]):

			self.uav_control.elevator = self.pid_controls[self.elevator]

			self.uav_control.rudder = self.pid_controls[self.yaw]

			self.uav_control.aileron = self.pid_controls[self.aileron]

			print("Vehicle State ", "Lat : ", self.uav_global_state.lattitude, "Lon : ", self.uav_global_state.longitude, " Alt : ", self.uav_global_state.altitude_msl, " AirSpeed ", self.uav_local_state.airspeed)

			#print("Applying elevators", self.uav_local_state.pitch, self.current_states[self.pitch], self.uav_control.elevator, self.uav_control.aileron)

		# self.uav_control.throttle = self.uav_control.throttle + (0.01*(120-self.uav_local_state.airspeed))

		# print("Control ", self.uav_control.throttle)

		# if self.uav_control.throttle > 1:
		# 	self.uav_control.throttle = 1.0

		# if self.uav_control.throttle < 0:
		# 	self.uav_control.throttle = 0.0
	

	def timer_loop(self):

		self.Takeoff()
		

		self.uav_control_pub.publish(self.uav_control)


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
	
	takeoff_node = Takeoff()

	rclpy.spin(takeoff_node)


if __name__ == '__main__':
	main()