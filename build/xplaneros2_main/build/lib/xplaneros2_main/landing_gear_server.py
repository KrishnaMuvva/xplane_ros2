import sys
import time

sys.path.insert(0, '/home/uas/Documents/blue/envs/XPlaneConnect/Python3/src')

import xpc

import rclpy
from rclpy.node import Node

from xplane_interfaces.srv import LandingGear

class Landing_Gear_Server(Node):

	def __init__(self):

		super().__init__('landing_gear_server')

		self.uas = xpc.XPlaneConnect()

		self.datarefs = ['sim/cockpit2/controls/gear_handle_down']

		self.timer_period = 1

		self.timer = self.create_timer(self.timer_period, self.main)


	def main(self):

		data = self.uas.getDREFs(self.datarefs)

		print(data[0][0])

		if data[0][0] > 0:

			print("Landing gear down")


def main(args = None):

	rclpy.init(args = args)

	node = Landing_Gear_Server()

	node.main()

	rclpy.spin(node)

if __name__ == '__main__':
	main()