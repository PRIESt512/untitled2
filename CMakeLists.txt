cmake_minimum_required(VERSION 3.7)
project(untitled2)

set(CMAKE_CXX_STANDARD 11)

add_compile_options(-mavx2)

set(SOURCE_FILES main.cpp)
add_executable(untitled2 ${SOURCE_FILES})