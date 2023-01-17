cmake_minimum_required(VERSION 2.6)

if(NOT ${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
    enable_language(ASM)

    if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Linux" AND ${ARCH} STREQUAL "i386")
        file(GLOB_RECURSE src_list "src/*.c*" "src/atomic-i386.S")
    elseif(${ARCH} STREQUAL "arm64")
        file(GLOB_RECURSE src_list "src/*.c*" "src/fbSwitch-arm64.S")
    endif()
endif()

include(../build_tools/cmake/Library.cmake)