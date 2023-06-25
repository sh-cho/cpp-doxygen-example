cmake_minimum_required(VERSION 3.24)
project(cpp_doxygen_example)

set(CMAKE_CXX_STANDARD 23)

add_executable(cpp_doxygen_example main.cpp Animal.cc Animal.h)
