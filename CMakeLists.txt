cmake_minimum_required(VERSION 3.21)
project(cpp_exceptions)

set(CMAKE_CXX_STANDARD 14)

add_executable(basic Basic.cpp CustomExceptions.cpp)
add_executable(standart StandartExceptions.cpp)
add_executable(custom CustomExceptions.cpp)
add_executable(catch_custom CatchSubClassExceptions.cpp)
