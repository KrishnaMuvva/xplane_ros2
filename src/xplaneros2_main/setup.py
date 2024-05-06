from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'xplaneros2_main'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*.launch.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='uas',
    maintainer_email='uas@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'uav_state_node = xplaneros2_main.uav_state_node:main',
            'uav_control_node = xplaneros2_main.uav_control_node:main',
            'data_collection = xplaneros2_main.data_collection:main'
        ],
    },
)
