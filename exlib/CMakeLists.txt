cmake_minimum_required(VERSION 3.5)

if(NOT ${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
    enable_language(ASM)

    if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Linux" AND ${BUILD_ARCH} STREQUAL "ia32")
        file(GLOB src_list "src/*.c*" "src/*.S")
    else()
        file(GLOB src_list "src/*.c*")
    endif()

    if(${BUILD_ARCH} STREQUAL "loong64ow")
        set(ARCH_SRC "loong64")
    else()
        set(ARCH_SRC ${BUILD_ARCH})
    endif()

    file(GLOB ctx_list "src/ctx/${ARCH_SRC}/*.c" "src/ctx/${ARCH_SRC}/*.S")
    list(APPEND src_list ${ctx_list})

    include_directories(
        ${PROJECT_SOURCE_DIR}/src/ctx/${ARCH_SRC}
        ${PROJECT_SOURCE_DIR}/src/ctx/common
    )
else()
    file(GLOB src_list "src/*.c*")
endif()

include(../build_tools/cmake/Library.cmake)