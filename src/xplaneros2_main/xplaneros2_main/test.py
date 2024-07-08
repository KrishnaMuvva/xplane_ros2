import sys
import time

sys.path.insert(0, '/home/uas/Documents/blue/envs/XPlaneConnect/Python3/src')

import xpc

import rclpy
from rclpy.node import Node

from xplane_interfaces.msg import UAVLocalState, UAVControl, UAVAutoPilot

from xplane_interfaces.srv import ParkingBrake

class Test(Node):

	def __init__(self):

		super().__init__('test_node')

		self.uas = xpc.XPlaneConnect()

		self.uav_state = UAVLocalState()

		self.uav_autopilot = UAVAutoPilot()

		self.state_subscriber = self.create_subscription(UAVLocalState, '/xplane/uav/local_state', self.state_cb, 1)

		self.autopilot_publisher = self.create_publisher(UAVAutoPilot, '/xplane/uav/autopilot_pub', 1)

		self.client = self.create_client(ParkingBrake, 'control_srv/parking_brake')

		self.datarefs = ['sim/flightmodel/controls/parkbrake']

		self.uas.sendDREF("sim/flightmodel/controls/parkbrake", 0)

		self.uas.sendDREF("sim/cockpit/autopilot/autopilot_mode", 2)

		print("AUTOPILOT MODE ", self.uas.getDREF("sim/cockpit/autopilot/autopilot_mode")[0])

		# while not self.client.wait_for_service(timeout_sec = 1.0):
		# 	print("Waiting for the service")

		# self.req = ParkingBrake.Request()

		# self.req.parking_brake = True

		# self.future = self.client.call_async(self.req)

		# self.timer_period = 0.1

		# self.timer = self.create_timer(self.timer_period, self.main)

	
	def state_cb(self, state):
		self.uav_state = state
		#print(self.uav_state.airspeed)

	def main(self):

		data = self.uas.getDREFs(self.datarefs)

		self.uav_autopilot.heading, self.uav_autopilot.altitude, self.uav_autopilot.airspeed, self.uav_autopilot.vertical_velocity = 270.0, 25000.0, 230.0, 700.0

		self.autopilot_publisher.publish(self.uav_autopilot)

		#print(data[0][0], self.req.parking_brake)

		print(self.uav_autopilot.heading)


def main(args = None):

	rclpy.init(args = args)

	node = Test()

	node.main()

	rclpy.spin(node)

if __name__ == '__main__':
	main()