cmake_minimum_required(VERSION 3.5)

project(Inheritance LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Inheritance main.cpp
                           fahrzeug.h fahrzeug.cpp
                           pkw.h pkw.cpp
                       boot.h boot.cpp)
