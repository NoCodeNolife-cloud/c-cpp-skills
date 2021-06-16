cmake_minimum_required(VERSION 3.19)
project(User_defined_stream_buffer)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(User_defined_stream_buffer main.cpp basic_outbuf.h fdoutbuf.cpp fdoutbuf.h outbuf.cpp outbuf.h)