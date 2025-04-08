include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.11.0
)
FetchContent_MakeAvailable(googletest)

add_executable(sorting main.cpp)
target_link_libraries(sorting gtest gtest_main)
add_subdirectory(test)

