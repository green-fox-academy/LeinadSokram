cmake_minimum_required(VERSION 3.13)
project(Async_log_test C)

set(CMAKE_C_STANDARD 99)

add_executable(Async_log_test main.c cmake-build-debug/queue.h cmake-build-debug/queue.c cmake-build-debug/utility.c cmake-build-debug/utility.h)