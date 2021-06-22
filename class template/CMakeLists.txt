cmake_minimum_required(VERSION 3.19)
project(class_template)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fexec-charset=GBK")
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(class_template main.cpp Data.cpp Data.h)