cmake_minimum_required(VERSION 3.10)
project(visual_SLAM)

set(CMAKE_CXX_STANDARD 14)

find_package(OpenCV REQUIRED)

include_directories(include)
include_directories(${OpenCV_INCLUDE_DIRS} "/usr/include/eigen3")

add_executable(visual_SLAM
        include/geometry.hpp
        include/photometric.hpp
        src/geometry.cpp
        src/main.cpp
        src/photometric.cpp)
