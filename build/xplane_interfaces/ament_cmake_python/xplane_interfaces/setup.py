from setuptools import find_packages
from setuptools import setup

setup(
    name='xplane_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('xplane_interfaces', 'xplane_interfaces.*')),
)
