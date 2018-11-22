cmake_minimum_required(VERSION 3.12)
project(01Apple)

set(CMAKE_CXX_STANDARD 14)

add_executable(01Apple main.cpp)

include_directories(apple)
add_subdirectory(apple)
add_subdirectory(apple_test)

target_link_libraries(01Apple apple)