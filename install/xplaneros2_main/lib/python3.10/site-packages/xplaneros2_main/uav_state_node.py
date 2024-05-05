import sys
import time

sys.path.insert(0, '/home/uas/Documents/blue/envs/XPlaneConnect/Python3/src')

import xpc

import rclpy
from rclpy.node import Node

from xplane_interfaces.msg import UAVState

class Xplane_State_Node(Node):

	def __init__(self):

		super().__init__('state_node')

		self.uas = xpc.XPlaneConnect()

		self.uav_state = UAVState()

		self.drefs = []

		self.drefs.append("sim/flightmodel/position/groundspeed")              # 0
		self.drefs.append("sim/flightmodel/position/indicated_airspeed")       # 1
		self.drefs.append("sim/flightmodel/position/vh_ind")                   # 2
		self.drefs.append("sim/flightmodel/controls/parkbrake")                # 3
		self.drefs.append("sim/weather/wind_speed_kt")                         # 4

		self.drefs.append("sim/flightmodel/position/local_x")                  # 5
		self.drefs.append("sim/flightmodel/position/local_y")                  # 6
		self.drefs.append("sim/flightmodel/position/local_z")                  # 7

		self.drefs.append("sim/flightmodel/position/local_vx")                 # 8
		self.drefs.append("sim/flightmodel/position/local_vy")                 # 9
		self.drefs.append("sim/flightmodel/position/local_vz")                 # 10

		self.drefs.append("sim/flightmodel/position/local_ax")                 # 11
		self.drefs.append("sim/flightmodel/position/local_ay")                 # 12
		self.drefs.append("sim/flightmodel/position/local_az")                 # 13

		self.state_publisher = self.create_publisher(UAVState, '/xplane/uav/state', 1)

		time_period = 0.01

		self.timer = self.create_timer(time_period, self.timer_callback)

	
	def timer_callback(self):

		self.pose = self.uas.getPOSI()

		self.aug_positions = self.uas.getDREFs(self.drefs)

		self.uav_state.lattitude, self.uav_state.longitude, self.uav_state.altitude = self.pose[0], self.pose[1], self.pose[2]

		self.uav_state.roll, self.uav_state.pitch, self.uav_state.heading = self.pose[4], self.pose[3], self.pose[5]

		self.uav_state.airspeed = self.aug_positions[1][0]

		self.uav_state.local_x, self.uav_state.local_y, self.uav_state.local_z = self.aug_positions[5][0], self.aug_positions[6][0], self.aug_positions[7][0]

		self.uav_state.local_vx, self.uav_state.local_vy, self.uav_state.local_vz = self.aug_positions[8][0], self.aug_positions[9][0], self.aug_positions[10][0]

		self.uav_state.local_ax, self.uav_state.local_ay, self.uav_state.local_az = self.aug_positions[11][0], self.aug_positions[12][0], self.aug_positions[13][0]

		#print(self.uav_state)

		#print(len(self.drefs))

		self.state_publisher.publish(self.uav_state)


def main(args = None):

	rclpy.init(args=args)
	
	state_node = Xplane_State_Node()
	#node.start()

	rclpy.spin(state_node)


if __name__ == '__main__':
	main()
