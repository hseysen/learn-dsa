cmake_minimum_required(VERSION 3.10)
project(dev LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

add_executable(test_env programs/test_env.cpp)
add_executable(test_array_adt programs/test_array_adt.cpp src/array_adt.cpp)
