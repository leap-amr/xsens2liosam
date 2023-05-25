#include "core.hpp"

namespace Xsens2LioSam
{
//! Constructor
X2LioSam::X2LioSam(int argc, char** argv)
{
    ros::init(argc, argv, "xsens2liosam");
    ros::NodeHandle n;
    this->pub = n.advertise<sensor_msgs::Imu>("/imu_raw", 1000);
    this->sub = n.subscribe("/imu/data", 1000, &X2LioSam::cb, this);
    ros::Rate loop_rate(10);
}

//! Callback Subscribe
void X2LioSam::cb(const sensor_msgs::Imu::ConstPtr& data)
{
    this->pub.publish(data);
}
}

