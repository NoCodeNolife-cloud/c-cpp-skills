cmake_minimum_required(VERSION 3.20)
project(ConcurrentFileCopy)

set(CMAKE_CXX_STANDARD 14)

add_executable(ConcurrentFileCopy ConcurrentFileCopy.h ConcurrentFileCopy.cpp)
