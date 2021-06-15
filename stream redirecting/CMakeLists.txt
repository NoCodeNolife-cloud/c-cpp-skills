cmake_minimum_required(VERSION 3.19)
project(stream_redirecting)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(stream_redirecting main.cpp)