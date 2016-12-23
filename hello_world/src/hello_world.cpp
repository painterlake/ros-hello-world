#include <ros/ros.h>

int main (int argc, char** argv)
{
  ros::init(argc, argv, "hello_world");
  ros::NodeHandle nh;
  
  ros::Rate r(1);
  
  while (ros::ok())
  {
    ROS_INFO("hello_world");
    r.sleep();
  }
  
  return 0;
}
