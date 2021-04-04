# MakerLab_AP_ROS_SLAM
![Logo5_path_png-1024x712](https://user-images.githubusercontent.com/51743743/113521464-e46fd000-9599-11eb-9cd1-e5ba5ea0cecf.png)

How to install ROS on raspberry pi 3 B+ and PC

Step 1: Installing ROS kinetic in Ubuntu 16.04
Link:http://wiki.ros.org/kinetic/Installation/Ubuntu

Step 2:Download Raspbian distribution OS in sd card minimum of 8GB
link:https://www.raspberrypi.org/software/operating-systems/#raspberry-pi-os-32-bit

Step 3:Installing ROS kinetic on Raspberry pi
link:https://www.intorobotics.com/how-to-install-ros-kinetic-on-raspberry-pi-3-running-raspbian-stretch-lite/#:~:text=%20%20%201%20Step%201%3A%20Download%20and,don%E2%80%99t%20want%20to%20repeat%20the%20installation...%20More%20

Step 4:Changing of IP address in bashrc 

PC is the master 
Raspberry PI is the slave

to get ipaddress from Ubuntu / Raspberry open terminal
type "ifconfig"

to get into bashrc type

nano ~/.bashrc
//////////////////////////////////////////////////////////////////////////
for example  it looks like this 
![network_configuration3](https://user-images.githubusercontent.com/51743743/113521895-c9528f80-959c-11eb-90f3-a012592701fe.png)

/////////////////////////////////////////////////////////////////////////
then type
source ~/.bashrc

Step 5:Installing lidar depend on the lidar you use 

Here I use inno make - LIDAR - 06
link:http://wiki.inno-maker.com/display/HOMEPAGE/LD06?preview=/6949506/6949511/LDROBOT_LD06_Development%20manual_v1.0_en.pdf

Step 6:Communication between Arduino UNO and Raspberry PI
