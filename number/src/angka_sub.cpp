#include <iostream>
#include "ros/ros.h"
#include "std_msgs/Int8.h"

void callback(const std_msgs::Int8::ConstPtr& m){
	ROS_INFO("data = %d\n", m->data);
}

int main(int argc, char **argv){
    ros::init(argc, argv, "angka_sub");
    ros::NodeHandle n;
    ros::Subscriber bil_sub = n.subscribe<std_msgs::Int8>("angka", 10, callback);
    ros::spin();
    return 0;
}

