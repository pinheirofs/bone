cmake_minimum_required(VERSION 3.5.1)

project(bone)

set(CMAKE_CXX_FLAGS "-std=c++14 -Wall")

include_directories(${PROJECT_SOURCE_DIR})

add_library(bone
reciver.cpp
server.cpp
)

enable_testing()

add_subdirectory(test)
