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

		self.takeoff_pitch, self.cruise_pitch = 9, 0

		self.cruise_alt_goal, self.min_takeoff_speed = 400, 90

		self.time_period = 0.01

		self.timer = self.create_timer(self.time_period, self.Takeoff)


	def uav_state_cb(self, uav_state):

		self.uav_state = uav_state

		#print(self.uav_state.airspeed)


	def Takeoff(self):

		self.uas.sendDREF("sim/flightmodel/controls/parkbrake", 0)

		# self.cruise_alt_goal = cruise_alt_goal

		# self.min_takeoff_speed = min_takeoff_speed

		
		if self.uav_state.airspeed < self.min_takeoff_speed:

			self.uav_control.throttle = 1.0

			self.uav_control_pub.publish(self.uav_control)

			print("Pose ", self.uav_state.local_x, self.uav_state.local_y, self.uav_state.local_z)

			print("Trying to achieve takeoff speed ", self.uav_state.airspeed, self.uav_state.local_vx, self.uav_state.local_vy, self.uav_state.local_vz)

			#time.sleep(0.01)

		
		if self.uav_state.altitude < self.cruise_alt_goal:

			self.uav_control.elevator = 0.02*(self.takeoff_pitch-self.uav_state.pitch)

			self.uav_control_pub.publish(self.uav_control)

			print("Trying to achieve goal altitude ", self.uav_state.altitude, self.uav_state.local_x, self.uav_state.local_y, self.uav_state.local_z)

			print("Vel ", self.uav_state.local_vx, self.uav_state.local_vy, self.uav_state.local_vz)

			#time.sleep(0.01)



def main(args = None):

	rclpy.init(args=args)
	
	main_node = Xplane_ROS2()
	#print(main_node.uav_state.airspeed)
	#main_node.Takeoff(400,90)
	
	#node.start()

	print("Done")

	rclpy.spin(main_node)


if __name__ == '__main__':
	main()