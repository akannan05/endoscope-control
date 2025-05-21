from setuptools import find_packages
from setuptools import setup

setup(
    name='mprls_imu_node',
    version='0.0.0',
    packages=find_packages(
        include=('mprls_imu_node', 'mprls_imu_node.*')),
)
