cmake_minimum_required(VERSION 3.10)

get_filename_component(lib_name ${CMAKE_CURRENT_SOURCE_DIR} NAME)
project(${lib_name})

list(APPEND src_list ${PROJECT_SOURCE_DIR}/src/gtest-all.cc)

include(../build_tools/cmake/Library.cmake)