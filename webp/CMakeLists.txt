cmake_minimum_required(VERSION 2.6)

if((${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows") AND (NOT MSVC))
    set(flags "-msse4.1")
endif()
add_definitions(-DWEBP_USE_THREAD=1)

include(../tools/Library.cmake)
