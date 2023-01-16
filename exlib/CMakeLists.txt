cmake_minimum_required(VERSION 2.6)

if(NOT ${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
    enable_language(ASM)
    file(GLOB_RECURSE src_list "src/*.c*" "src/*-${ARCH}.S")
endif()

include(../build_tools/cmake/Library.cmake)