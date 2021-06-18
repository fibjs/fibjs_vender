cmake_minimum_required(VERSION 2.6)

if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
    # @note: there's no __STDC__ definition on git-bash of Windows
    add_definitions(-D__STDC__)
endif()

include(../build_tools/cmake/Library.cmake)
