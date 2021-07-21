cmake_minimum_required(VERSION 3.19)
project(class_template_inherit)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fexec-charset=GBK")
set(CMAKE_EXE_LINKER_FLAGS  "-static")

add_executable(class_template_inherit main.cpp Base.cpp Base.h Plus.cpp Plus.h)