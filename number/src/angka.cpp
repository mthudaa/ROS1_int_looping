#include <iostream>
#include "ros/ros.h"
#include "std_msgs/Int8.h"

int main(int argc, char **argv){
	ros::init(argc, argv, "angka");
	ros::NodeHandle n;
	ros::Publisher bil = n.advertise<std_msgs::Int8>("angka", 10);
	ros::Rate loop(10);
	
	int count = 0;
	while(ros::ok){
		std_msgs::Int8 m;
		m.data = count;
		bil.publish(m);
		ros::spinOnce();
		loop.sleep();
		count++;
	}
	
	return 0;
}
