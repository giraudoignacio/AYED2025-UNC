cmake_minimum_required(VERSION 3.30)
project(extensionlistas2)
set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.11.0
)
FetchContent_MakeAvailable(googletest)

add_executable(extensionlistas2 main.cpp)
target_link_libraries(extensionlistas2 gtest gtest_main)
add_subdirectory(test)

