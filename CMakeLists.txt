cmake_minimum_required(VERSION 3.25)
project(college)

set(CMAKE_CXX_STANDARD 17)

add_executable(college main.cpp lab5/include/lab5.h lab5/src/lab5.cpp lab8/include/lab8.h options/include/options.h options/src/options.cpp lab8/src/lab8.cpp lab6/src/lab6.cpp lab7/src/lab7.cpp utils/src/utils.cpp utils/include/utils.h lab17/lab17.h lab17/lab17.cpp)
