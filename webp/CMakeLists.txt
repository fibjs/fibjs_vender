cmake_minimum_required(VERSION 2.6)

if(NOT MSVC)
    set(flags "-msse4.1")
endif()

include(../tools/Library.cmake)
