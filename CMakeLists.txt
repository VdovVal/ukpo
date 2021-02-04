cmake_minimum_required(VERSION 3.9)
project(ukpo)

set(CMAKE_CXX_STANDARD 11)

add_executable(main main.cpp)
target_link_libraries(main Program)
add_library(Program program.cpp)
add_executable(runTests test.cpp)
target_link_libraries(runTests Program)