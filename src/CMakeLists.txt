cmake_minimum_required(VERSION 3.22.1)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(cctoolkit LANGUAGES CXX VERSION 1.0)
file(GLOB_RECURSE SRC_FILES ./*.cpp)
add_executable(cctoolkit ${SRC_FILES})
target_include_directories(cctoolkit PUBLIC ./include)



