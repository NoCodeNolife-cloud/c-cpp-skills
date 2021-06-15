cmake_minimum_required(VERSION 3.19)
project(User_defined_format_flags)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(User_defined_format_flags main.cpp Fraction.cpp Fraction.h)