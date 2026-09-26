cmake_minimum_required(VERSION 3.10)

get_filename_component(lib_name ${CMAKE_CURRENT_SOURCE_DIR} NAME)
project(${lib_name})

# enable_asm_language(): enables the assembly language and states that the
# .asm sources of this library are written in it (build_tools/cmake/option_asm.cmake).
include(${CMAKE_CURRENT_LIST_DIR}/../build_tools/cmake/option_asm.cmake)

if("${BUILD_OS}" STREQUAL "Windows")
    # The NASM assembler comes from the build system (build_tools/cmake/
    # config.cmake sets CMAKE_ASM_NASM_COMPILER); the x64 and ia32 sources of
    # this project are NASM syntax.
    enable_asm_language(ASM_NASM)
    include(./cmake/windows_${BUILD_ARCH}.cmake)
else()
    enable_asm_language(ASM)

    if("${BUILD_OS}" MATCHES "Darwin|iPhone")
        include(./cmake/darwin_${BUILD_ARCH}.cmake)
    elseif("${BUILD_ARCH}" STREQUAL "loong64ow")
        include(./cmake/linux_loong64.cmake)
    else()
        include(./cmake/linux_${BUILD_ARCH}.cmake)
    endif()
endif()

include_directories(
    "src/providers/common/include"
    "src/providers/implementations/include"
    "src/crypto"
    "src"
)

if("${BUILD_OS}" STREQUAL "Windows")
    add_definitions(
        -DWIN32_LEAN_AND_MEAN
        -DUSE_BCRYPTGENRANDOM
    )
endif()

add_definitions(
    -DOPENSSL_THREADS
    -DOPENSSL_NO_STATIC_ENGINE
    -DOPENSSL_NO_CAPIENG
    -DOPENSSL_NO_ASYNC

    -DOPENSSLDIR=""
    -DENGINESDIR=""
    -DMODULESDIR=""
)

include(../build_tools/cmake/Library.cmake)
