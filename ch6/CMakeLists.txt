cmake_minimum_required(VERSION 3.5)

project(Engines LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Engines main.cpp
                       fahrzeug.h fahrzeug.cpp
                       pkw.h pkw.cpp
                       electriccar.h electriccar.cpp
                       dieselcar.h dieselcar.cpp)
