#include <ros/ros.h>
#include "add.h"

int main(int argc, char** argv) {
    // 日本語を出力する場合のため
    ros::init(argc, argv, "ros_buildfirm_test");
    ros::AsyncSpinner spinner(4);
    spinner.start();

    ROS_INFO("ros buildfirm test");
    ROS_INFO("%d + %d = %d", 1, 2, add(1, 2));

    spinner.stop();
    ros::shutdown();
    return 0;
}
