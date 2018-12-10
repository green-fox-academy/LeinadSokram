cmake_minimum_required(VERSION 3.13)
project(DojoPoker)

set(CMAKE_CXX_STANDARD 14)

add_executable(DojoPoker main.cpp tdd_lib/simple.cpp tdd_lib/simple.h tdd_test/simple_test.cpp)