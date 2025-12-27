cmake_minimum_required(VERSION 3.13.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_PARALLEL_LEVEL 8)

project(Add VERSION 0.1.0 LANGUAGES C CXX)

add_executable(main)

target_sources(main
  PRIVATE
  src/main.cpp
)


