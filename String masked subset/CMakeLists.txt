cmake_minimum_required(VERSION 3.19)
project(String_masked_subset)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(String_masked_subset main.cpp)