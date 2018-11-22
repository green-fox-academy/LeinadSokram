add_compile_definitions(WINVER=0x0500)

set(PATH_TO_GOOGLETEST "C:/Private/googletest")
add_subdirectory(${PATH_TO_GOOGLETEST} ${CMAKE_CURRENT_BINARY_DIR}/googletest)
include_directories(${PATH_TO_GOOGLETEST}/googletest/include)

add_executable(apple_test apple_test.cpp)
target_link_libraries(apple_test gtest gtest_main)
target_link_libraries(apple_test apple)