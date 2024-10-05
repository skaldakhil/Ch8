cmake_minimum_required(VERSION 3.26)
project(sim)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(${PROJECT_NAME} main.cpp spreadSheetCell.cpp)

target_include_directories(${PROJECT_NAME} SYSTEM PRIVATE "${CMAKE_SOURCE_DIR}/include")