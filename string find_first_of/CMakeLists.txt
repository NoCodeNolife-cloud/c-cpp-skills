cmake_minimum_required(VERSION 3.19)
project(string_find_first_of)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(string_find_first_of main.cpp)