import sys
import time

sys.path.insert(0, '/home/uas/Documents/blue/envs/XPlaneConnect/Python3/src')

import xpc

import rclpy
from rclpy.node import Node

from xplane_interfaces.msg import UAVGlobalState

class Additional_Controls(Node):

	def __init__(self):

		super().__init__('additional_controls')

		self.uas = xpc.XPlaneConnect()

		self.uav_global_state = UAVGlobalState()

		self.landing_gear_up_altitude = 1000


		self.datarefs = ['sim/cockpit2/controls/gear_handle_down']

		# Global state subscriber
		self.uav_global_state_subscriber = self.create_subscription(UAVGlobalState, '/xplane/uav/global_state', self.uav_global_state_cb, 1)

		self.timer_period = 1

		self.timer = self.create_timer(self.timer_period, self.main)


	def uav_global_state_cb(self, uav_global_state):

		self.uav_global_state = uav_global_state


	def main(self):

		landing_gear_status = self.uas.getDREFs(self.datarefs)

		if (self.uav_global_state.altitude_agl > self.landing_gear_up_altitude) and (landing_gear_status[0][0] > 0):

			self.uas.sendDREFs(self.datarefs, [0])

		if (self.uav_global_state.altitude_agl < self.landing_gear_up_altitude) and (landing_gear_status[0][0] < 1):

			self.uas.sendDREFs(self.datarefs, [1])

		print(landing_gear_status[0][0], self.uav_global_state.altitude_agl)


def main(args = None):

	rclpy.init(args = args)

	node = Additional_Controls()

	node.main()

	rclpy.spin(node)

if __name__ == '__main__':
	main()