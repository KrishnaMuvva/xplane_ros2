import sys
import time

sys.path.insert(0, '/home/uas/Documents/blue/envs/XPlaneConnect/Python3/src')

import xpc

import rclpy
from rclpy.node import Node

class Environment(Node):

	def __init__(self):

		super().__init__('state_node')

		self.uas = xpc.XPlaneConnect()

		self.drefs = []

		self.cloud_type = 0
		self.drefs.append("sim/weather/cloud_type[0]")

		self.cloud_coverage = 1 
		self.drefs.append("sim/weather/cloud_coverage[0]")

		self.cloud_base_msl = 2
		self.drefs.append("sim/weather/cloud_base_msl_m[0]")

		self.cloud_top_msl = 3
		self.drefs.append("sim/weather/cloud_tops_msl_m[0]")

		self.visibility = 4
		self.drefs.append("sim/weather/visibility_reported_m")

		self.rain_percent = 5
		self.drefs.append("sim/weather/rain_percent")

		self.turbulence_percent = 6
		self.drefs.append("sim/weather/wind_turbulence_percent")

		self.pressure_sea_level = 7
		self.drefs.append("sim/weather/barometer_sealevel_inhg")

		self.pressure_at_vehicle = 8
		self.drefs.append("sim/weather/barometer_current_inhg")

		self.wind_speed = 9
		self.drefs.append("sim/weather/wind_speed_kt[0]")

		self.wind_dir = 10
		self.drefs.append("sim/weather/wind_direction_degt[0]")

		self.wind_shear_speed = 11
		self.drefs.append("sim/weather/shear_speed_kt[0]")

		self.wind__shear_dir = 12
		self.drefs.append("sim/weather/shear_direction_degt[0]")

		self.turbulence_factor = 13
		self.drefs.append("sim/weather/turbulence[0]")

		self.air_density = 14
		self.drefs.append("sim/weather/rho")

		self.air_sigma = 15
		self.drefs.append("sim/weather/sigma")

		self.runway_friction = 16
		self.drefs.append("sim/weather/runway_friction")

		self.temperature_sea_level = 17
		self.drefs.append("sim/weather/temperature_sealevel_c")

		self.temperature_outside_vehicle = 18
		self.drefs.append("sim/weather/temperature_ambient_c")

		self.temperature_leading_edge_wing = 19
		self.drefs.append("sim/weather/temperature_le_c")

		self.thermal_rate = 20
		self.drefs.append("sim/weather/thermal_rate_ms")

		self.wind_speed_at_vehicle = 21
		self.drefs.append("sim/weather/wind_speed_kt")

		self.wind_direction_at_vehicle = 22
		self.drefs.append("sim/weather/wind_direction_degt")

		self.wind_x, self.wind_y, self.wind_z = 23, 24, 25
		self.drefs.append("sim/weather/wind_now_x_msc")
		self.drefs.append("sim/weather/wind_now_x_msc")
		self.drefs.append("sim/weather/wind_now_x_msc")

		self.random = 26
		self.drefs.append("sim/cockpit2/radios/indicators/fms_cdu1_text_line0")


		time_period = 1

		self.timer = self.create_timer(time_period, self.timer_callback)


	def timer_callback(self):

		self.env_state = self.uas.getDREFs(self.drefs)

		#print(self.env_state[self.random][0])
		#print(self.env_state[self.wind_z][0])
		#print(self.env_state[self.random])
		listv = self.env_state[self.random]
		res = ''.join(chr(int(val)) for val in listv)
		print(res)
		


def main(args = None):

	rclpy.init(args=args)
	
	env_node = Environment()
	#node.start()

	rclpy.spin(env_node)


if __name__ == '__main__':
	main()