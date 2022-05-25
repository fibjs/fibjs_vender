cmake_minimum_required(VERSION 2.6)

if(${ARCH} STREQUAL "amd64")
    add_definitions(-D__SSE2__)
    file(GLOB_RECURSE src_list "sse/*.c")
elseif(${ARCH} STREQUAL "arm64")
    file(GLOB_RECURSE src_list "neon/*.c")
else()
    file(GLOB_RECURSE src_list "ref/*.c")
endif()

include(../build_tools/cmake/Library.cmake)
