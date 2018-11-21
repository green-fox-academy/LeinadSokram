cmake_minimum_required(VERSION 3.12)
project(02AnimalsInTheZoo)

set(CMAKE_CXX_STANDARD 14)

add_executable(02AnimalsInTheZoo main.cpp Animal.cpp Animal.h Reptile.cpp Reptile.h Bird.cpp Bird.h Mammal.cpp Mammal.h)