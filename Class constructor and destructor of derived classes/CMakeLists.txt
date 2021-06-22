cmake_minimum_required(VERSION 3.19)
project(Class_constructor_and_destructor_of_derived_classes)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fexec-charset=GBK")

add_executable(Class_constructor_and_destructor_of_derived_classes main.cpp Base.cpp Base.h PlusBase.cpp PlusBase.h)