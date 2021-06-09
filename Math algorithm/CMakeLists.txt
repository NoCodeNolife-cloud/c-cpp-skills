cmake_minimum_required(VERSION 3.19)
project(Math_algorithm)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(Math_algorithm main.cpp)