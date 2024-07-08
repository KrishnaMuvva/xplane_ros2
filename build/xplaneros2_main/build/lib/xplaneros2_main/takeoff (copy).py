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
		self.min_takeoff_speeds = {"C172":55, "SF150":55, "BE9L":60, "B738":90, "B747":130, "MD82":140}

		# Grace time
		self.start_time, self.wait_time = time.time(), 2

		# Getting initial heading
		self.initial_heading = self.uas.getPOSI()[5]

		# Reference taakeoff, cruise and landing pitches 
		self.takeoff_pitch, self.cruise_pitch, self.land_pitch = 8, 1, -4

		# Cruise altitude and takeoff speed references
		self.cruise_alt_goal, self.min_takeoff_speed = 400, 90

		# Takeoff and cruise speeds
		self.takeoff_speed, self.cruise_speed = 250, 250

		# self.kpe, self.kpa, self.kpr, self.kpt = 0.02,  0.0,  0.09,   0.00
		# self.kde, self.kda, self.kdr, self.kdt  = 0.00, 0.00,  0.00,  0
		# self.kie, self.kia, self.kir, self.kit = 0.000, 0.000, 0.00, 0

		# self.kp = [self.kpe, self.kpa, self.kpr, self.kpt]
		# self.kd = [self.kde, self.kda, self.kdr, self.kdt]
		# self.ki = [self.kie, self.kia, self.kir, self.kit]

		# initial_heading = self.uas.getPOSI()[5]

		# print("Initial heading ", initial_heading)

		# self.kp, self.kd, self.kr = np.array(self.kp), np.array(self.kd), np.array(self.ki)

		# self.prev_errors, self.sum_errors, self.references, self.current_states = [0,0,0,0], [0,0,0,0], [0,0,initial_heading,0], [0,0,0,0]

		# self.prev_errors, self.references, self.current_states = np.array(self.prev_errors), np.array(self.references), np.array(self.current_states)

		# self.throttle, self.elevator, self.aileron, self.rudder = 3, 0, 1, 2

		# self.pitch, self.roll, self.yaw = 0, 1, 2

		# self.cruise_duration = 60

		# self.phases = ['takeoff', 'cruise']
		# self.phase = 0
		

		self.time_period = 0.01

		self.timer = self.create_timer(self.time_period, self.timer_loop)


	def uav_type_cb(self, uav_type):

		self.uav_type = uav_type


	def uav_local_state_cb(self, uav_local_state):

		self.uav_local_state = uav_local_state

	
	def uav_global_state_cb(self, uav_global_state):

		self.uav_global_state = uav_global_state



	def Takeoff(self):


		# self.cruise_alt_goal = cruise_alt_goal

		# self.min_takeoff_speed = min_takeoff_speed

		self.uas.sendDREF("sim/flightmodel/controls/parkbrake", 0)

		self.PID_Control()

		
		if self.uav_local_state.airspeed < self.min_takeoff_speeds[self.uav_type.id]:

			self.uav_control.throttle = 1.0

			self.uav_control.rudder = self.PIDControls[self.yaw]

			print("Takeoff : Trying to achieve min takeoff velocity ", self.uav_state.airspeed, self.min_takeoff_speed)

			#print("Yaw ", self.uav_control.rudder, self.references[self.yaw], self.uav_state.heading)

			#self.uav_control_pub.publish(self.uav_control)

		
		if (self.uav_local_state.airspeed > self.min_takeoff_speeds[self.uav_type.id]) and (self.uav_state.altitude < self.cruise_alt_goal):

			self.uav_control.elevator = self.PIDControls[self.pitch]

			self.uav_control.rudder = self.PIDControls[self.yaw]

			print("Takeoff : Climbinbg ", self.uav_state.altitude, self.uav_control.elevator)

			#self.uav_control_pub.publish(self.uav_control)

		if self.uav_state.altitude > self.cruise_alt_goal:

			self.phase = 1

			self.cruise_start = time.time()





	# def Takeoff(self):

	# 	self.uas.sendDREF("sim/flightmodel/controls/parkbrake", 0)

	# 	if self.uav_local_state.airspeed < self.min_takeoff_speeds[self.uav_type.id]:

	# 		self.uav_control.throttle = 1.0

	# 		self.uav_control_pub.publish(self.uav_control)

	# 		self.uas.sendDREF("sim/cockpit/autopilot/airspeed", 50.0)

	# 		print("Trying to achieve takeoff speed ", self.uav_local_state.airspeed, self.uav_global_state.global_yaw)



	# def timer_loop(self):

	# 	if ((time.time()-self.start_time) > self.wait_time):

	# 		self.Takeoff()

	def timer_loop(self):

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