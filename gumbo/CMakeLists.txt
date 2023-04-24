cmake_minimum_required(VERSION 2.6)

if(NOT MSVC)
    set(flags "-Wno-implicit-function-declaration")
endif()

include(../build_tools/cmake/Library.cmake)
