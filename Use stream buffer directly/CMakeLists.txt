cmake_minimum_required(VERSION 3.19)
project(Use_stream_buffer_directly)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(Use_stream_buffer_directly main.cpp)