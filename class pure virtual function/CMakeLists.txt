cmake_minimum_required(VERSION 3.19)
project(class_pure_virtual_function)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fexec-charset=GBK")

add_executable(class_pure_virtual_function main.cpp Base.cpp Base.h Derived.cpp Derived.h)