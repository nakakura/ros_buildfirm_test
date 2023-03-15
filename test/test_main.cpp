#include <gtest/gtest.h>
#include <ros/ros.h>
#include "../src/add.h"

TEST(TestSuite, add) {
    ASSERT_EQ(add(1,2), 3);
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  ros::init(argc, argv, "test_node");

  ros::AsyncSpinner spinner(4);
  spinner.start();
  int ret = RUN_ALL_TESTS();
  spinner.stop();
  ros::shutdown();
  return ret;
}
