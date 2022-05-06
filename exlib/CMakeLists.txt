cmake_minimum_required(VERSION 2.6)

if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Linux" AND ${ARCH} STREQUAL "i386")
    enable_language(ASM-ATT)
    file(GLOB_RECURSE src_list "src/*.c*" "src/*.s")
endif()

include(../build_tools/cmake/Library.cmake)
