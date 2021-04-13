# MakerLab_AP_ROS_SLAM
![Logo5_path_png-1024x712](https://user-images.githubusercontent.com/51743743/113521464-e46fd000-9599-11eb-9cd1-e5ba5ea0cecf.png)

How to install ROS on raspberry pi 3 B+ and PC

Step 1: Installing ROS kinetic in Ubuntu 16.04

Link:http://wiki.ros.org/kinetic/Installation/Ubuntu

Step 2:Download Raspbian distribution OS in sd card minimum of 8GB with (kinetic pre-installed) 

link:https://downloads.ubiquityrobotics.com/pi.html

Step 3:Changing of IP address in bashrc 

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

Step 4:Installing lidar depend on the lidar you use 

Here I use inno make - LIDAR - 06

link:http://wiki.inno-maker.com/display/HOMEPAGE/LD06?preview=/6949506/6949511/LDROBOT_LD06_Development%20manual_v1.0_en.pdf

Step 5:Desgin the Obstacle avoidance rover using Arduino UNO with HC-SR04 Ultrasonic Distance Sensor and H-bride driver

https://1.bp.blogspot.com/-bdc1XCdmvtw/XWe1dAVdkuI/AAAAAAAAA_I/wz1XvLG2PsgrVXo6z8JZLwunidTRx_oGgCLcBGAs/s640/SELF%2BPARKING%2BVEHICLE_bb.png






