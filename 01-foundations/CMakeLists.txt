cmake_minimum_required(VERSION 3.10)

project(foundations)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

add_executable(
    foundations
    main.cc
)

target_include_directories(foundations 
    PUBLIC
    .
)
target_sources(foundations 
    PRIVATE
    board.cc
)