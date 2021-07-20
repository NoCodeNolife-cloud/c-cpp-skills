cmake_minimum_required(VERSION 3.19)
project(class_template_inherit)

set(CMAKE_CXX_STANDARD 14)

add_executable(class_template_inherit main.cpp Base.cpp Base.h Plus.cpp Plus.h)