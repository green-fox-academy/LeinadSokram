cmake_minimum_required(VERSION 3.13)
project(Number_counter C)

set(CMAKE_C_STANDARD 99)

add_executable(Number_counter main.c number_counter.h number_counter.c)