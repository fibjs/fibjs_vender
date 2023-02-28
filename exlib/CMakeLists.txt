cmake_minimum_required(VERSION 2.6)

if(NOT ${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
    enable_language(ASM)

    if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Linux" AND ${ARCH} STREQUAL "i386")
        file(GLOB src_list "src/*.c*" "src/*.S")
    else()
        file(GLOB src_list "src/*.c*")
    endif()

    file(GLOB ctx_list "src/ctx/${ARCH}/*.c" "src/ctx/${ARCH}/*.S")
    list(APPEND src_list ${ctx_list})

    include_directories(
        ${PROJECT_SOURCE_DIR}/src/ctx/${ARCH}
        ${PROJECT_SOURCE_DIR}/src/ctx/common
    )
else()
    file(GLOB src_list "src/*.c*")
endif()

include(../build_tools/cmake/Library.cmake)