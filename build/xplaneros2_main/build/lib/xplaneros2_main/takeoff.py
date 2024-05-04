from xplane_main import *

class Takeoff(Node):

	def __init__(self):

		super().__init__('takeoff_node')

		self.xplane_ros2 = Xplane_ROS2()