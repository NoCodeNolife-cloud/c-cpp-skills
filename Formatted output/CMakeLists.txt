cmake_minimum_required(VERSION 3.19)
project(Formatted_output)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(Formatted_output main.cpp Person.cpp Person.h)