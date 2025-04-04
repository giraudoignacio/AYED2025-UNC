cmake_minimum_required(VERSION 3.30)
project(herencia)

set(CMAKE_CXX_STANDARD 20)

add_executable(herencia main.cpp Persona.cpp Estudiante.cpp)
