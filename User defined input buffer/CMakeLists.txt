cmake_minimum_required(VERSION 3.19)
project(User_defined_input_buffer)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(User_defined_input_buffer main.cpp inbuf.cpp inbuf.h)