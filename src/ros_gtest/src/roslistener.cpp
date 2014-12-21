#include "roslistener.h"

void RosListener::msgCallback(const std_msgs::String & msg){
    ROS_INFO_STREAM("I hear from talker: "<< msg.data.c_str());
    received_msg = msg.data.c_str();
}

int main(int argc, char **argv){
    ros::init(argc, argv, "Listener");
    RosListener rl;
    ros::spin();
    return 0;
}
