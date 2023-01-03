cmake_minimum_required(VERSION 2.6)

if(NOT MSVC)
    set(flags "-std=c99")
endif()

include(../build_tools/cmake/Library.cmake)
