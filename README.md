# XPlane ROS2

## Installation of XPlane 11 on Ubuntu 22.04

Please follow the instructions in the below video

[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/KZuP2PZzdxs/0.jpg)](https://www.youtube.com/watch?v=KZuP2PZzdxs)

## Installation of XPlaneConnect (XPC)

Please follow the instructions in the below video

[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/rUIpycqbXAk/0.jpg)](https://www.youtube.com/watch?v=rUIpycqbXAk)

## Installation of ROS2 (Humble)

Please follow the instructions in the below video

[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/y5N2Zcn-2Fs/0.jpg)](https://www.youtube.com/watch?v=y5N2Zcn-2Fs)


## Installation of Xplane ROS2 Package

Please execute the following commands in your shell to build the package

Clone repository

``` shell

git clone https://github.com/KrishnaMuvva/xplane_ros2.git

```

Navigate to the package directory

``` shell

cd xplane_ros2

```

Build the package

``` shell

colcon build

```

Add into environment

``` shell

source install/setup.bash

```


Add environmetn variables to bash

``` shell

echo "source install/setup.bash" >> ~/.bashrc

```


## Usage of Package

### Autonomous Takeoff

### Autonomous Traffic Patterns

### Autonomous Airport (KLNK) to Airport (KOMA) Navigation
