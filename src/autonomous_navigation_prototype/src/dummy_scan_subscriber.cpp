#include "ros/ros.h"
#include "ros/console.h"
#include "sensor_msgs/LaserScan.h"

void chatterCallback(const sensor_msgs::LaserScan::ConstPtr&) {
  ROS_DEBUG("I am taking a scan");
}

int main(int argc, char **argv) {
  ros::init(argc, argv, "listener");
  ros::NodeHandle n;
  ros::Subscriber sub = n.subscribe("scan", 1000, chatterCallback);
  ros::spin();
  return 0;
}
