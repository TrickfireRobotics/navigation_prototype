#include<ros/ros.h>
#include<tf/transform_broadcaster.h>

void scanCallback(std::string &msg){
  ROS_DEBUG("MSG: %s", msg);
}

int main(int argc, char** argv) {
  ros::init(argc, argv, "scan_broadcaster");
}
