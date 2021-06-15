cmake_minimum_required(VERSION 3.19)
project(decimal_to_binary)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(decimal_to_binary main.cpp)