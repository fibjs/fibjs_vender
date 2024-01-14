cmake_minimum_required(VERSION 3.5)

if(NOT MSVC)
    set(flags "-Wno-implicit-function-declaration")
endif()

include(../build_tools/cmake/Library.cmake)
