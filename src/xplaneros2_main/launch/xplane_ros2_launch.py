from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='xplaneros2_main',
            executable='uav_state_node',
            output='screen'),
    ])
