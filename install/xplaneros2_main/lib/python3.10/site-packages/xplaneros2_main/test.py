import sys
import time

sys.path.insert(0, '/home/uas/Documents/blue/envs/XPlaneConnect/Python3/src')

import xpc

import rclpy
from rclpy.node import Node

from xplane_interfaces.msg import UAVState, UAVControl

class Test(Node):

	def __init__(self):

		super().__init__('test_node')

		self.uas = xpc.XPlaneConnect()

		self.uav_state = UAVState()

		self.state_subscriber = self.create_subscription(UAVState, '/xplane/uav/state', self.state_cb, 1)

		self.timer_period = 0.01

		self.timer = self.create_timer(self.timer_period, self.main)

	
	def state_cb(self, state):
		self.uav_state = state
		#print(self.uav_state.airspeed)

	def main(self):


			print(self.uav_state.airspeed)


def main(args = None):

	rclpy.init(args = args)

	node = Test()

	node.main()

	rclpy.spin(node)

if __name__ == '__main__':
	main()