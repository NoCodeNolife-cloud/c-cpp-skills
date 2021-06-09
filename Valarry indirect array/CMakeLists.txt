cmake_minimum_required(VERSION 3.19)
project(Valarry_indirect_array)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(Valarry_indirect_array main.cpp)