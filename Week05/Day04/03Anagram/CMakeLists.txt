cmake_minimum_required(VERSION 3.12)
project(03Anagram)

set(CMAKE_CXX_STANDARD 14)

add_executable(03Anagram main.cpp)

include_directories(anagram)
add_subdirectory(anagram)
add_subdirectory(anagram_test)

target_link_libraries(03Anagram anagram)
