cmake_minimum_required(VERSION 3.10.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)

# set(CMAKE_CXX_STANDARD_REQUIRED True)

project(CPPVersion VERSION 0.1.0 LANGUAGES C CXX)

add_executable(a.out src/main.cpp)

