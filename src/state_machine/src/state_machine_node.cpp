#include <ros/ros.h>
#include <std_msgs/String.h>
#include <std_msgs/Int32.h>

#include <iostream>
#include <string>
#include <sstream>

#include "state_machine_node.h"
#include "FSM1.h"
using namespace std;

//const int bufferSize = 1000;

int main(int argc, char** argv){
    ros::init(argc, argv, "FSM");
    ros::NodeHandle n;

    FSM node(n);
    ROS_INFO("FSM started");
    ros::spin();
    return 0;
}
