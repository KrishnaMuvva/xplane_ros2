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

Launch Package

``` shell

ros2 launch xplaneros2_main xplane_ros2_launch.py

```

### Autonomous Takeoff

Autonomous Takeoff Script

``` shell

python3 takeoff.py

```

#### Autonomous Takeoff B737

[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/GQZEaKGTUPU/0.jpg)](https://www.youtube.com/watch?v=GQZEaKGTUPU)


#### Autonomous Takeoff C172

[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/FXIXJIdJc0w/0.jpg)](https://www.youtube.com/watch?v=FXIXJIdJc0w)

#### Autonomous Takeoff B747

[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/18DFC2xwiJM/0.jpg)](https://www.youtube.com/watch?v=18DFC2xwiJM)


### Autonomous Traffic Patterns

Autonomous Traffic Pattern Script (Note: Make sure that autopilot is on)

``` shell

python3 traffic_pattern.py

```

[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/6SplI0cyI7c/0.jpg)](https://www.youtube.com/watch?v=6SplI0cyI7c)
