cmake_minimum_required(VERSION 3.10)

get_filename_component(lib_name ${CMAKE_CURRENT_SOURCE_DIR} NAME)
project(${lib_name})

if(NOT MSVC)
    set(flags "-Wno-implicit-function-declaration")
endif()

include(../build_tools/cmake/Library.cmake)
