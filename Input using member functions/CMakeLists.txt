cmake_minimum_required(VERSION 3.19)
project(Input_using_member_functions)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(Input_using_member_functions main.cpp)