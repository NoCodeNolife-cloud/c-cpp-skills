cmake_minimum_required(VERSION 3.19)
project(class_multiple_inheritance)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fexec-charset=GBK")

add_executable(class_multiple_inheritance main.cpp A.cpp A.h B.cpp B.h C.cpp C.h)