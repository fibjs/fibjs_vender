cmake_minimum_required(VERSION 3.10)

include_directories(${PROJECT_SOURCE_DIR}/include/juice)

add_definitions(-DJUICE_STATIC)

include(../build_tools/cmake/Library.cmake)
