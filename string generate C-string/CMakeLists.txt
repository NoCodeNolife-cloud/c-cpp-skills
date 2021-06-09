cmake_minimum_required(VERSION 3.19)
project(string_generate_C_string)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(string_generate_C_string main.cpp)