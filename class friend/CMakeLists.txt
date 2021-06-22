cmake_minimum_required(VERSION 3.19)
project(class_friend)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fexec-charset=GBK")

add_executable(class_friend main.cpp Data.cpp Data.h FriendClass.cpp FriendClass.h)