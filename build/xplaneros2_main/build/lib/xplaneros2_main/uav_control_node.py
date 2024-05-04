import sys
import time

sys.path.insert(0, '/home/uas/Documents/blue/envs/XPlaneConnect/Python3/src')

import xpc

import rclpy
from rclpy.node import Node

from xplane_interfaces.msg import UAVControl

class Xplane_Control_Node(Node):

	def __init__(self):

		super().__init__('control_node')

		self.uas = xpc.XPlaneConnect()

		self.uav_control = UAVControl()

		self.throttle, self.elevator, self.alieron, self.rudder = 3, 0, 1, 2

		self.control = [0, 0, 0, 0]


		self.control_publisher = self.create_publisher(UAVControl, '/xplane/uav/control', 1)

		self.control_sub = self.create_subscription(UAVControl, '/xplane/uav/control', self.control_cb, 1)

		time_period = 0.01

		self.timer = self.create_timer(time_period, self.timer_callback)


	def control_cb(self, uav_control):

		self.uav_control = uav_control

	
	def timer_callback(self):

		self.control[self.throttle], self.control[self.alieron] = self.uav_control.throttle, self.uav_control.alieron

		self.control[self.elevator], self.control[self.rudder] = self.uav_control.elevator, self.uav_control.rudder

		self.uas.sendCTRL(self.control)


def main(args = None):

	rclpy.init(args=args)
	
	control_node = Xplane_Control_Node()
	#node.start()

	rclpy.spin(control_node)


if __name__ == '__main__':
	main()
