cmake_minimum_required(VERSION 3.25)
project(calculator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME}
main.cpp
division.cpp
addition.cpp
print_result.cpp)
