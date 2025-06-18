cmake_minimum_required(VERSION 3.10)

PROJECT(Heap)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_library(heap INTERFACE)
target_sources(heap INTERFACE BinarySearchTree.h)
target_include_directories(heap INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(${PROJECT_NAME} main.cpp)