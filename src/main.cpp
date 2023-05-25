#include "core.hpp"

using namespace Xsens2LioSam;

int main(int argc, char **argv)
{
    X2LioSam x2liosam(argc, argv);
    ros::spin();
    return 0;
}

