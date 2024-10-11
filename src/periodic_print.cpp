#include <ros/ros.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "periodic_print");
  ros::NodeHandle node_handle("");

  while (ros::ok())
  {
    ROS_INFO_THROTTLE(2, "%s is alive", ros::this_node::getName().c_str());
  }

  return 0;
}
