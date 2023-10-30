cmake_minimum_required(VERSION 2.6)

if(NOT ${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
    enable_language(ASM)

    if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Linux" AND ${BUILD_ARCH} STREQUAL "ia32")
        file(GLOB src_list "src/*.c*" "src/*.S")
    else()
        file(GLOB src_list "src/*.c*")
    endif()

    file(GLOB ctx_list "src/ctx/${BUILD_ARCH}/*.c" "src/ctx/${BUILD_ARCH}/*.S")
    list(APPEND src_list ${ctx_list})

    include_directories(
        ${PROJECT_SOURCE_DIR}/src/ctx/${BUILD_ARCH}
        ${PROJECT_SOURCE_DIR}/src/ctx/common
    )
else()
    file(GLOB src_list "src/*.c*")
endif()

include(../build_tools/cmake/Library.cmake)