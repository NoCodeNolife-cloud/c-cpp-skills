cmake_minimum_required(VERSION 3.19)
project(class_Inheritance_and_derivation)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fexec-charset=GBK")

add_executable(class_Inheritance_and_derivation main.cpp Base.cpp Base.h BasePlus.cpp BasePlus.h)