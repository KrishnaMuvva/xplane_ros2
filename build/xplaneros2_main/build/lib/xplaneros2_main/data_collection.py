import sys
import time
import numpy as np

sys.path.insert(0, '/home/uas/Documents/blue/envs/XPlaneConnect/Python3/src')

import xpc

import rclpy
from rclpy.node import Node

from xplane_interfaces.msg import UAVGlobalState, UAVLocalState, UAVControl

class Data(Node):

	def __init__(self):

		super().__init__('data_collection')

		self.uav_global_state, self.uav_local_state = UAVGlobalState(), UAVLocalState()

		self.uav_local_state_subscriber = self.create_subscription(UAVLocalState, '/xplane/uav/local_state', self.uav_local_state_cb, 1)

		# Global state subscriber
		self.uav_global_state_subscriber = self.create_subscription(UAVGlobalState, '/xplane/uav/global_state', self.uav_global_state_cb, 1)

		self.csv_file = open("pose.csv", "w")
		self.csv_file.write("X , Y, Z, Vx, Vy, Vz, AirSpeed\n")

		self.time_period = 1

		self.timer = self.create_timer(self.time_period, self.timer_loop)


	def uav_local_state_cb(self, uav_local_state):

		self.uav_local_state = uav_local_state


	def uav_global_state_cb(self, uav_global_state):

		self.uav_global_state = uav_global_state

	def timer_loop(self):

		data_str = str(self.uav_local_state.local_x)+","+str(self.uav_local_state.local_y)+","+str(self.uav_local_state.local_z)+","+str(self.uav_local_state.local_vx)+","+str(self.uav_local_state.local_vy)+","+str(self.uav_local_state.local_vz)+","+str(self.uav_local_state.airspeed)+"\n"

		self.csv_file.write(data_str)


def main(args = None):

	rclpy.init(args=args)
	
	data_node = Data()
	#node.start()

	rclpy.spin(data_node)


if __name__ == '__main__':
	main()