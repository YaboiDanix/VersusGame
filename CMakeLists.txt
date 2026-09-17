cmake_minimum_required(VERSION 4.3)
project(VersusGame)

set(CMAKE_CXX_STANDARD 23)

add_executable(VersusGame main.cpp
        fight.h
        fight.cpp)
