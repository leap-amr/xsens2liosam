#include "ros/ros.h"
#include "sensor_msgs/Imu.h"

namespace Xsens2LioSam
{
class X2LioSam
{
    public:
        X2LioSam(int, char **);
    private:
        void cb(const sensor_msgs::Imu::ConstPtr& data);
        ros::Publisher pub;
        ros::Subscriber sub;
};
}

