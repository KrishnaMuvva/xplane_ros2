from test import *



rclpy.init(args = None)

node = Test()

for i in range(100):

	print(node.uav_state.airspeed)