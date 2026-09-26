cmake_minimum_required(VERSION 3.10)

get_filename_component(lib_name ${CMAKE_CURRENT_SOURCE_DIR} NAME)
project(${lib_name})

include_directories("${PROJECT_SOURCE_DIR}/absl")

set(src_folder "absl")

include(../build_tools/cmake/Library.cmake)
