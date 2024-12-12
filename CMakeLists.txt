cmake_minimum_required(VERSION 3.10)
project(dev LANGUAGES CXX)

# Use CMake Standard 17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Folder for the executables for ease of use
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

include_directories(include)

# Tests
add_executable(test_env tests/test_env.cpp)
add_executable(test_array_adt tests/test_array_adt.cpp src/array_adt.cpp)

# Algorithm examples
add_executable(pair_sum_k algorithms/pair_sum_k.cpp)
