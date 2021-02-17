cmake_minimum_required(VERSION 2.6)

if((${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows") AND (NOT MSVC))
    set(flags "-fexceptions")
endif()

include(../tools/Library.cmake)