cmake_minimum_required(VERSION 3.5)

project(Classes LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Classes main.cpp
                       mathvec3d.h mathvec3d.cpp
                       calculator.h calculator.cpp)
