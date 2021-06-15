cmake_minimum_required(VERSION 3.19)
project(Custom_manipulators)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(Custom_manipulators main.cpp)