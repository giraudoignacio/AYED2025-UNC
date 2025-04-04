cmake_minimum_required(VERSION 3.30)
project(00_pointers)

set(CMAKE_CXX_STANDARD 26)
add_executable(00_pointers main.cpp funciones.cpp)

# Tests
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)
FetchContent_MakeAvailable(googletest)
add_executable(tests main_test.cpp funciones.cpp)
target_link_libraries(tests gtest_main)
add_test(NAME tests COMMAND tests)