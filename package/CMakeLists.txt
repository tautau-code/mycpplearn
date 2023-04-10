cmake_minimum_required(VERSION 3.24)
project(package)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(package
        OvernightPackage.cpp
        OvernightPackage.h
        Package.cpp
        Package.h
        TwoDayPackage.cpp
        TwoDayPackage.h main.cpp)
