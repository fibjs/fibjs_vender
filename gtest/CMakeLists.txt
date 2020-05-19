cmake_minimum_required(VERSION 2.6)

if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
    set(flags "-fexceptions")
endif()

include(../tools/basic.cmake)