import sys
import time

sys.path.insert(0, '/home/uas/Documents/blue/envs/XPlaneConnect/Python3/src')

import xpc

import rclpy
from rclpy.node import Node

from xplane_interfaces.msg import UAVControl, UAVAutoPilot

class Xplane_Control_Node(Node):

	def __init__(self):

		super().__init__('control_node')

		self.uas = xpc.XPlaneConnect()

		self.uav_control = UAVControl()

		self.throttle, self.elevator, self.aileron, self.rudder = 3, 0, 1, 2

		self.control = [0, 0, 0, 0]


		self.control_publisher = self.create_publisher(UAVControl, '/xplane/uav/control', 1)

		self.control_sub = self.create_subscription(UAVControl, '/xplane/uav/control', self.control_cb, 1)

		self.AutoPilot_Pub_Init()

		time_period = 0.01

		self.timer = self.create_timer(time_period, self.timer_callback)


	def control_cb(self, uav_control):

		self.uav_control = uav_control

	def autopilot_cb(self, uav_autopilot):

		self.uav_autopilot = uav_autopilot


	def AutoPilot_Pub_Init(self):

		self.autopilot_datarefs = []

		self.autopilot_heading, self.autopilot_altitude, self.autopilot_airspeed, self.autopilot_vertical_velocity = 0,1,2,3

		self.autopilot_datarefs.append("sim/cockpit/autopilot/heading")
		self.autopilot_datarefs.append("sim/cockpit/autopilot/altitude")
		self.autopilot_datarefs.append("sim/cockpit/autopilot/airspeed")
		self.autopilot_datarefs.append("sim/cockpit/autopilot/vertical_velocity")

		self.uav_autopilot = UAVAutoPilot()

		self.autopilot_publisher = self.create_publisher(UAVAutoPilot, '/xplane/uav/autopilot_pub', 1)

		self.autopilot_sub = self.create_subscription(UAVAutoPilot, '/xplane/uav/autopilot_pub', self.autopilot_cb, 1)

	def UAVAutoPilot_Pub_Update(self):

		autopilot_arr = [self.uav_autopilot.heading, self.uav_autopilot.altitude, self.uav_autopilot.airspeed, self.uav_autopilot.vertical_velocity]

		self.uas.sendDREFs(self.autopilot_datarefs, autopilot_arr)

	
	def timer_callback(self):

		self.control[self.throttle], self.control[self.aileron] = self.uav_control.throttle, self.uav_control.aileron

		self.control[self.elevator], self.control[self.rudder] = self.uav_control.elevator, self.uav_control.rudder

		if (self.uas.getDREF("sim/cockpit/autopilot/autopilot_mode")[0] > 0.5):

			self.UAVAutoPilot_Pub_Update()

		else:

			self.uas.sendCTRL(self.control)


def main(args = None):

	rclpy.init(args=args)
	
	control_node = Xplane_Control_Node()
	#node.start()

	rclpy.spin(control_node)


if __name__ == '__main__':
	main()
