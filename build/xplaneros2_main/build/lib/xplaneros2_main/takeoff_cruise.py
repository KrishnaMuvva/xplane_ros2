import sys
import time
import numpy as np

sys.path.insert(0, '/home/uas/Documents/blue/envs/XPlaneConnect/Python3/src')

import xpc

import rclpy
from rclpy.node import Node

from xplane_interfaces.msg import UAVState, UAVControl

## TODO

# Takeoff behavior

# Keep head steady while takeoff

# Parking brake service

class Xplane_ROS2(Node):

	def __init__(self):

		super().__init__('takeoff_cruise')

		self.uas = xpc.XPlaneConnect()

		self.uav_state, self.uav_control = UAVState(), UAVControl()

		self.uav_control_pub = self.create_publisher(UAVControl, '/xplane/uav/control', 1)

		self.uav_state_subscriber = self.create_subscription(UAVState, '/xplane/uav/state', self.uav_state_cb, 10)

		self.takeoff_pitch, self.cruise_pitch, self.land_pitch = 8, 1, -4

		self.cruise_alt_goal, self.min_takeoff_speed = 400, 90

		self.takeoff_speed, self.cruise_speed = 250, 250

		self.kpe, self.kpa, self.kpr, self.kpt = 0.02,  0.0,  0.09,   0.00
		self.kde, self.kda, self.kdr, self.kdt  = 0.00, 0.00,  0.00,  0
		self.kie, self.kia, self.kir, self.kit = 0.000, 0.000, 0.00, 0

		self.kp = [self.kpe, self.kpa, self.kpr, self.kpt]
		self.kd = [self.kde, self.kda, self.kdr, self.kdt]
		self.ki = [self.kie, self.kia, self.kir, self.kit]

		initial_heading = self.uas.getPOSI()[5]

		print("Initial heading ", initial_heading)

		self.kp, self.kd, self.kr = np.array(self.kp), np.array(self.kd), np.array(self.ki)

		self.prev_errors, self.sum_errors, self.references, self.current_states = [0,0,0,0], [0,0,0,0], [0,0,initial_heading,0], [0,0,0,0]

		self.prev_errors, self.references, self.current_states = np.array(self.prev_errors), np.array(self.references), np.array(self.current_states)

		self.throttle, self.elevator, self.aileron, self.rudder = 3, 0, 1, 2

		self.pitch, self.roll, self.yaw = 0, 1, 2

		self.cruise_duration = 60

		self.phases = ['takeoff', 'cruise']
		self.phase = 0

		self.time_period = 0.01

		self.timer = self.create_timer(self.time_period, self.timer_loop)


	def uav_state_cb(self, uav_state):

		self.uav_state = uav_state

		#print(self.uav_state.airspeed)


	def update_PID_states(self):

		self.current_states[self.pitch], self.current_states[self.roll], self.current_states[self.yaw] = self.uav_state.pitch, self.uav_state.roll, self.uav_state.heading


	def PID_Control(self):

		self.update_PID_states()

		self.current_errors = self.references-self.current_states

		error_change = self.current_errors-self.prev_errors

		self.sum_errors += self.current_errors

		self.PIDControls = self.current_errors*self.kp + error_change*self.kd + self.sum_errors*self.ki

		self.prev_errors = self.current_errors


	def Knots_to_mps(self, velocity):

		velocity = velocity*(0.51444)

		return velocity




	def Takeoff(self):


		# self.cruise_alt_goal = cruise_alt_goal

		# self.min_takeoff_speed = min_takeoff_speed

		self.uas.sendDREF("sim/flightmodel/controls/parkbrake", 0)

		self.PID_Control()

		
		if self.uav_state.airspeed < self.min_takeoff_speed:

			self.uav_control.throttle = 1.0

			self.uav_control.rudder = self.PIDControls[self.yaw]

			print("Takeoff : Trying to achieve min takeoff velocity ", self.uav_state.airspeed, self.min_takeoff_speed)

			#print("Yaw ", self.uav_control.rudder, self.references[self.yaw], self.uav_state.heading)

			#self.uav_control_pub.publish(self.uav_control)

		
		if (self.uav_state.airspeed > self.min_takeoff_speed) and (self.uav_state.altitude < self.cruise_alt_goal):

			self.uav_control.elevator = self.PIDControls[self.pitch]

			self.uav_control.rudder = self.PIDControls[self.yaw]

			print("Takeoff : Climbinbg ", self.uav_state.altitude, self.uav_control.elevator)

			#self.uav_control_pub.publish(self.uav_control)

		if self.uav_state.altitude > self.cruise_alt_goal:

			self.phase = 1

			self.cruise_start = time.time()



	def Cruise(self):

		self.uav_control.throttle = 0.6

		self.uav_control.elevator = self.kpe*(self.cruise_pitch-self.uav_state.pitch)

		self.uav_control.rudder = 0.01*(self.references[self.yaw] - self.uav_state.heading)

		self.cruise_time = time.time() - self.cruise_start

		print("Crusing ", self.cruise_time, self.cruise_duration)

		if self.cruise_time > self.cruise_duration:

			self.phase = 2


	def Land(self):

		self.uav_control.throttle = 0.2

		self.uav_control.elevator = self.kpe*(self.land_pitch-self.uav_state.pitch)

		self.uav_control.rudder = 0.01*(self.references[self.yaw] - self.uav_state.heading)

		print("Performing landing ", self.uav_state.local_z)

		if self.uav_state.altitude < 215:

			self.phase = 2


	def timer_loop(self):

		if self.phase == 0:

			self.references[self.elevator] = self.takeoff_pitch

			self.Takeoff()

			#print("Rudder control ", self.uav_control.rudder, self.uav_state.heading, self.init_head)

			#self.uav_control_pub.publish(self.uav_control)

		elif self.phase == 1:

			self.references[self.pitch] == self.cruise_pitch

			self.Cruise()

			#self.uav_control_pub.publish(self.uav_control)

		else:

			print("Crusing done")

			time.sleep(5)


def main(args = None):

	rclpy.init(args=args)
	
	main_node = Xplane_ROS2()

	rclpy.spin(main_node)


if __name__ == '__main__':
	main()