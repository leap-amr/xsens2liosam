cmake_minimum_required(VERSION 3.0.2)
project(xsens2liosam)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  sensor_msgs
)

catkin_package(
)

include_directories(include
  ${catkin_INCLUDE_DIRS}
)

add_executable(xsens2liosam
    src/main.cpp
    src/core.cpp
    )
target_link_libraries(xsens2liosam
    ${catkin_LIBRARIES}
    )

