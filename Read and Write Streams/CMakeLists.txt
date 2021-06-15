cmake_minimum_required(VERSION 3.19)
project(Read_and_Write_Streams)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS  "-static")

add_executable(Read_and_Write_Streams main.cpp)