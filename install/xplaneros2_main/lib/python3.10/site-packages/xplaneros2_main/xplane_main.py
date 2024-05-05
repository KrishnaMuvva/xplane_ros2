import sys
import time
import numpy as np

sys.path.insert(0, '/home/uas/Documents/blue/envs/XPlaneConnect/Python3/src')

import xpc

import rclpy
from rclpy.node import Node

from xplane_interfaces.msg import UAVState, UAVControl

## TODO

# Takeoff behavior

# Keep head steady while takeoff

# Parking brake service

class Xplane_ROS2(Node):

	def __init__(self):

		super().__init__('main_node')

		self.uas = xpc.XPlaneConnect()

		self.uav_state, self.uav_control = UAVState(), UAVControl()

		self.uav_control_pub = self.create_publisher(UAVControl, '/xplane/uav/control', 1)

		self.uav_state_subscriber = self.create_subscription(UAVState, '/xplane/uav/state', self.uav_state_cb, 10)

		self.takeoff_pitch, self.cruise_pitch, self.land_pitch = 8, 1, -4

		self.cruise_alt_goal, self.min_takeoff_speed = 800, 90

		self.init_head = self.uav_state.heading

		self.kpe, self.kpa, self.kpr, self.kpt = 0.05,  0.0,  0.09,   0
		self.kde, self.kda, self.kdr, self.kdt  = 0.00, 0.00,  0.06,  0
		self.kie, self.kia, self.kir, self.kit = 0.000, 0.000, 0.05, 0

		self.kp = [self.kpe, self.kpa, self.kpr, self.kpt]
		self.kd = [self.kde, self.kda, self.kdr, self.kdt]
		self.ki = [self.kie, self.kia, self.kir, self.kit]

		self.init_head = 90.0

		self.kp, self.kd, self.kr = np.array(self.kp), np.array(self.kd), np.array(self.ki)

		self.time_period = 0.01

		self.timer = self.create_timer(self.time_period, self.timer_loop)


	def uav_state_cb(self, uav_state):

		self.uav_state = uav_state

		#print(self.uav_state.airspeed)


	def Takeoff(self):


		# self.cruise_alt_goal = cruise_alt_goal

		# self.min_takeoff_speed = min_takeoff_speed

		self.uas.sendDREF("sim/flightmodel/controls/parkbrake", 0)

		
		if self.uav_state.airspeed < self.min_takeoff_speed:

			self.uav_control.throttle = 1.0

			self.uav_control.rudder = self.kpr*(self.init_head - self.uav_state.heading)

			print("Takeoff : Trying to achieve min takeoff velocity ", self.uav_state.airspeed, self.min_takeoff_speed)

			#self.uav_control_pub.publish(self.uav_control)

		
		if (self.uav_state.airspeed > self.min_takeoff_speed) and (self.uav_state.altitude < self.cruise_alt_goal):

			self.uav_control.elevator = 0.02*(self.takeoff_pitch-self.uav_state.pitch)

			self.uav_control.rudder = self.kpr*(self.init_head - self.uav_state.heading)

			print("Takeoff : Climbinbg ", self.uav_state.altitude, self.uav_control.elevator)

			#self.uav_control_pub.publish(self.uav_control)


	def Cruise(self):

		pass


	def timer_loop(self):

		if self.uav_state.altitude < self.cruise_alt_goal:

			self.Takeoff()

			#print("Rudder control ", self.uav_control.rudder, self.uav_state.heading, self.init_head)

			self.uav_control_pub.publish(self.uav_control)

		else:

			print("Takeoff is done")


def main(args = None):

	rclpy.init(args=args)
	
	main_node = Xplane_ROS2()

	rclpy.spin(main_node)


if __name__ == '__main__':
	main()