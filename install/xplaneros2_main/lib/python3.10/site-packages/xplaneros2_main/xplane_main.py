import sys
import time

sys.path.insert(0, '/home/uas/Documents/blue/envs/XPlaneConnect/Python3/src')

import xpc

import rclpy
from rclpy.node import Node

from xplane_interfaces.msg import UAVState, UAVControl

class Xplane_ROS2(Node):

	def __init__(self):

		super().__init__('main_node')

		self.uas = xpc.XPlaneConnect()

		self.uav_state, self.uav_control = UAVState(), UAVControl()

		self.uav_control_pub = self.create_publisher(UAVControl, '/xplane/uav/control', 1)

		self.uav_state_subscriber = self.create_subscription(UAVState, '/xplane/uav/state', self.uav_state_cb, 1)


	def uav_state_cb(self, uav_state):

		self.uav_state = uav_state


	def Takeoff(self, cruise_alt_goal, min_takeoff_speed):

		self.uas.sendDREF("sim/flightmodel/controls/parkbrake", 0)

		self.cruise_alt_goal = cruise_alt_goal

		self.min_takeoff_speed = min_takeoff_speed

		while self.uav_state.airspeed < self.min_takeoff_speed:

			self.uav_control.throttle = 1.0

			self.uav_control_pub.publish(self.uav_control)

			print("Speeds ", self.uav_state.airspeed, self.min_takeoff_speed)

			time.sleep(0.01)

		
		while self.uav_state.altitude < self.cruise_alt_goal:

			self.uav_control.elevator = 0.02*(self.takeoff_pitch-self.uav_state.pitch)

			self.uav_control_pub.publish(self.uav_control)

			print("Alt ", self.uav_state.altitude, self.cruise_alt_goal)

			time.sleep(0.01)



def main(args = None):

	rclpy.init(args=args)
	
	main_node = Xplane_ROS2()
	main_node.Takeoff(400, 90)
	#node.start()

	rclpy.spin(state_node)


if __name__ == '__main__':
	main()