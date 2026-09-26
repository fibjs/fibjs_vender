cmake_minimum_required(VERSION 3.10)

get_filename_component(lib_name ${CMAKE_CURRENT_SOURCE_DIR} NAME)
project(${lib_name})

add_definitions(-DHAVE_EXPAT_CONFIG_H=1)

include(../build_tools/cmake/Library.cmake)
