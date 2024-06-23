import sys
import time
import numpy as np

sys.path.insert(0, '/home/uas/Documents/blue/envs/XPlaneConnect/Python3/src')

import xpc

import rclpy
from rclpy.node import Node

from xplane_interfaces.msg import UAVType, UAVLocalState, UAVControl

## TODO

# Takeoff behavior

# Keep head steady while takeoff

# Parking brake service

class Takeoff(Node):

	def __init__(self):

		super().__init__('takeoff_node')

		self.uas = xpc.XPlaneConnect()

		self.uav_type, self.uav_local_state, self.uav_control = UAVType(), UAVLocalState(), UAVControl()

		self.uav_control_pub = self.create_publisher(UAVControl, '/xplane/uav/control', 1)

		self.uav_type_subscriber = self.create_subscription(UAVType, '/xplane/uav/type', self.uav_type_cb, 1)

		self.uav_local_state_subscriber = self.create_subscription(UAVLocalState, '/xplane/uav/local_state', self.uav_local_state_cb, 1)

		self.min_takeoff_speeds = {"C172":55, "SF150":55, "BE9L":60, "B737":90, "B747":130, "MD82":140}

		self.start_time, self.wait_time = time.time(), 2
		

		self.time_period = 0.01

		self.timer = self.create_timer(self.time_period, self.timer_loop)


	def uav_type_cb(self, uav_type):

		self.uav_type = uav_type


	def uav_local_state_cb(self, uav_local_state):

		self.uav_local_state = uav_local_state



	def Takeoff(self):

		self.uas.sendDREF("sim/flightmodel/controls/parkbrake", 0)

		if self.uav_local_state.airspeed < self.min_takeoff_speeds[self.uav_type.id]:

			self.uav_control.throttle = 1.0

			self.uav_control_pub.publish(self.uav_control)

			print("Trying to achieve takeoff speed ", self.uav_local_state.airspeed)



	def timer_loop(self):

		if ((time.time()-self.start_time) > self.wait_time):

			self.Takeoff()


def main(args = None):

	rclpy.init(args=args)
	
	takeoff_node = Takeoff()

	rclpy.spin(takeoff_node)


if __name__ == '__main__':
	main()