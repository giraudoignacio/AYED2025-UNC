add_executable(pointers main.cpp funciones.cpp)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)
FetchContent_MakeAvailable(googletest)
add_executable(pointers_tests main_test.cpp funciones.cpp)
target_link_libraries(pointers_tests gtest_main)
add_test(NAME pointers_tests COMMAND pointers_tests)