import sys
import time

sys.path.insert(0, '/home/uas/Documents/blue/envs/XPlaneConnect/Python3/src')

import xpc

import rclpy
from rclpy.node import Node

from xplane_interfaces.msg import UAVGlobalState, UAVLocalState, UAVType, UAVAutoPilot

class Xplane_State_Node(Node):

	def __init__(self):

		super().__init__('state_node')

		self.uas = xpc.XPlaneConnect()

		# self.drefs.append("sim/flightmodel/position/groundspeed")              # 0
		# self.drefs.append("sim/flightmodel/position/indicated_airspeed")       # 1
		# self.drefs.append("sim/flightmodel/position/vh_ind")                   # 2
		# self.drefs.append("sim/flightmodel/controls/parkbrake")                # 3
		# self.drefs.append("sim/weather/wind_speed_kt")                         # 4

		

		#self.state_msg_counter, self.state_msg_frame = 0, 'UAV State'

		self.UAVType_Datarefs()

		self.UAVGlobalState_Datarefs()

		self.UAVLocalState_Datarefs()

		#self.UAVAutoPilot_Datarefs()

		time_period = 0.01

		self.timer = self.create_timer(time_period, self.timer_callback)


	def UAVType_Datarefs(self):

		self.type_drefs = []

		self.uav_id, self.uav_name = 0, 1

		self.type_drefs.append("sim/aircraft/view/acf_ICAO")
		self.type_drefs.append("sim/aircraft/view/acf_descrip")

		self.uav_type = UAVType()

		self.type_publisher = self.create_publisher(UAVType, '/xplane/uav/type', 1)


	def UAVType_Update(self):

		self.type_data = self.uas.getDREFs(self.type_drefs)

		id_tuple, name_tuple = self.type_data[self.uav_id], self.type_data[self.uav_name]

		self.uav_type.id, self.uav_type.name =  ''.join(chr(int(val)) for val in id_tuple), ''.join(chr(int(val)) for val in name_tuple)

		self.type_publisher.publish(self.uav_type)


	def UAVGlobalState_Datarefs(self):

		self.global_state_drefs = []

		self.altitude_agl = 0
		self.global_state_drefs.append("sim/flightmodel/position/y_agl") 

		self.true_theta, self.true_phi, self.true_psi = 1, 2, 3
		self.global_state_drefs.append("sim/flightmodel/position/true_theta")
		self.global_state_drefs.append("sim/flightmodel/position/true_phi")
		self.global_state_drefs.append("sim/flightmodel/position/true_psi")

		self.ground_speed = 4
		self.global_state_drefs.append("sim/flightmodel/position/groundspeed")


		self.uav_global_state = UAVGlobalState()

		self.global_state_publisher = self.create_publisher(UAVGlobalState, '/xplane/uav/global_state', 1)


	def UAVGlobalState_Update(self):

		self.global_data = self.uas.getDREFs(self.global_state_drefs)

		self.uav_global_state.lattitude, self.uav_global_state.longitude, self.uav_global_state.altitude_msl, self.uav_global_state.altitude_agl = self.pose[0], self.pose[1], self.pose[2], self.global_data[self.altitude_agl][0]

		self.uav_global_state.global_roll, self.uav_global_state.global_pitch, self.uav_global_state.global_yaw = self.global_data[self.true_theta][0], self.global_data[self.true_phi][0], self.global_data[self.true_psi][0]

		self.uav_global_state.groundspeed = self.global_data[self.ground_speed][0]

		self.global_state_publisher.publish(self.uav_global_state)


	def UAVLocalState_Datarefs(self):

		self.local_state_drefs = []

		self.local_x, self.local_y, self.local_z = 0, 1, 2

		self.local_state_drefs.append("sim/flightmodel/position/local_x")
		self.local_state_drefs.append("sim/flightmodel/position/local_y")
		self.local_state_drefs.append("sim/flightmodel/position/local_z")

		self.local_vx, self.local_vy, self.local_vz = 3, 4, 5

		self.local_state_drefs.append("sim/flightmodel/position/local_vx")
		self.local_state_drefs.append("sim/flightmodel/position/local_vy")
		self.local_state_drefs.append("sim/flightmodel/position/local_vz")

		self.local_ax, self.local_ay, self.local_az = 6, 7, 8

		self.local_state_drefs.append("sim/flightmodel/position/local_ax")
		self.local_state_drefs.append("sim/flightmodel/position/local_ay")
		self.local_state_drefs.append("sim/flightmodel/position/local_az")

		self.theta, self.phi, self.psi = 9, 10, 11

		self.local_state_drefs.append("sim/flightmodel/position/theta")
		self.local_state_drefs.append("sim/flightmodel/position/phi")
		self.local_state_drefs.append("sim/flightmodel/position/psi")  

		self.airspeed = 12
		self.local_state_drefs.append("sim/flightmodel/position/indicated_airspeed") 

		self.uav_local_state = UAVLocalState()

		self.local_state_publisher = self.create_publisher(UAVLocalState, '/xplane/uav/local_state', 1)


	def UAVLocalState_Update(self):

		self.local_data = self.uas.getDREFs(self.local_state_drefs)

		self.uav_local_state.local_x, self.uav_local_state.local_y, self.uav_local_state.local_z = self.local_data[self.local_x][0], self.local_data[self.local_y][0], self.local_data[self.local_z][0]

		self.uav_local_state.local_vx, self.uav_local_state.local_vy, self.uav_local_state.local_vz = self.local_data[self.local_vx][0], self.local_data[self.local_vy][0], self.local_data[self.local_vz][0]

		self.uav_local_state.local_ax, self.uav_local_state.local_ay, self.uav_local_state.local_az = self.local_data[self.local_ax][0], self.local_data[self.local_ay][0], self.local_data[self.local_az][0]

		self.uav_local_state.roll, self.uav_local_state.pitch, self.uav_local_state.yaw = self.local_data[self.phi][0], self.local_data[self.theta][0], self.local_data[self.psi][0]

		self.uav_local_state.airspeed = self.local_data[self.airspeed][0]

		#print(self.uav_local_state.airspeed)

		self.local_state_publisher.publish(self.uav_local_state)


	def UAVAutoPilot_Datarefs(self):

		self.autopilot_datarefs = []

		self.autopilot_heading, self.autopilot_altitude, self.autopilot_airspeed, self.autopilot_vertical_velocity = 0,1,2,3

		self.autopilot_datarefs.append("sim/cockpit/autopilot/heading")
		self.autopilot_datarefs.append("sim/cockpit/autopilot/altitude")
		self.autopilot_datarefs.append("sim/cockpit/autopilot/airspeed")
		self.autopilot_datarefs.append("sim/cockpit/autopilot/vertical_velocity")

		self.uav_autopilot = UAVAutoPilot()

		self.autopilot_publisher = self.create_publisher(UAVAutoPilot, '/xplane/uav/autopilot_sub', 1)


	def UAVAutoPilot_Update(self):

		self.autopilot_data = self.uas.getDREFs(self.autopilot_datarefs)

		self.uav_autopilot.heading, self.uav_autopilot.altitude = self.autopilot_data[self.autopilot_heading][0], self.autopilot_data[self.autopilot_altitude][0]
		self.uav_autopilot.airspeed, self.uav_autopilot.vertical_velocity = self.autopilot_data[self.autopilot_airspeed][0], self.autopilot_data[self.autopilot_vertical_velocity][0]

		print(self.uav_autopilot.altitude)

		self.autopilot_publisher.publish(self.uav_autopilot)

	
	def timer_callback(self):

		self.pose = self.uas.getPOSI()

		#self.uav_state.header.frame_id = self.state_msg_frame

		self.UAVType_Update()

		self.UAVGlobalState_Update()

		self.UAVLocalState_Update()

		#self.UAVAutoPilot_Update()
			


def main(args = None):

	rclpy.init(args=args)
	
	state_node = Xplane_State_Node()
	#node.start()

	rclpy.spin(state_node)


if __name__ == '__main__':
	main()
