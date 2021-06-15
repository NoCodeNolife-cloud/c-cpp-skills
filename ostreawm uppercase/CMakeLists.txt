cmake_minimum_required(VERSION 3.19)
project(ostreawm_uppercase)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(ostreawm_uppercase main.cpp)