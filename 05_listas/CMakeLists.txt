cmake_minimum_required(VERSION 3.30)
project(listas)

set(CMAKE_CXX_STANDARD 20)

add_executable(listas main.cpp nodo.cpp
        lista.cpp
        lista.hpp)
