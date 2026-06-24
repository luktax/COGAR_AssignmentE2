from setuptools import find_packages
from setuptools import setup

setup(
    name='go2_stair_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('go2_stair_interfaces', 'go2_stair_interfaces.*')),
)
