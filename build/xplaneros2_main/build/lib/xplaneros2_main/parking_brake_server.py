import sys
import time

sys.path.insert(0, '/home/uas/Documents/blue/envs/XPlaneConnect/Python3/src')

import xpc

import rclpy
from rclpy.node import Node

from xplane_interfaces.srv import ParkingBrake

class Parking_Brake_Server(Node):

	def __init__(self):

		super().__init__('parking_brake_server')

		self.uas = xpc.XPlaneConnect()

		self.datarefs = ['sim/flightmodel/controls/parkbrake']

		self.srv = self.create_service(ParkingBrake, 'control_srv/parking_brake', self.parknig_brake_service_callback)


	def parknig_brake_service_callback(self, request, response):

		data = self.uas.getDREFs(self.datarefs)

		print(data[0][0], request)


def main(args = None):

	rclpy.init(args = args)

	parking_brake_service = Parking_Brake_Server()

	#node.main()

	rclpy.spin(parking_brake_service)

if __name__ == '__main__':
	main()