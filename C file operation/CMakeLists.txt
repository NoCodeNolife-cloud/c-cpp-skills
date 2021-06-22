cmake_minimum_required(VERSION 3.19)
project(C_file_operation)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(C_file_operation main.cpp)