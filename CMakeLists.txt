cmake_minimum_required(VERSION 3.12)
project(date)

set(CMAKE_CXX_STANDARD 14)

add_executable(date main.cpp date.cpp date.h)
add_subdirectory(./googletest)
add_executable(tests tests.cpp date.cpp date.h)
target_include_directories(tests PUBLIC ./googletest/include)

target_link_libraries(tests gtest gtest_main)