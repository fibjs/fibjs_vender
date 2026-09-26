cmake_minimum_required(VERSION 3.10)

get_filename_component(lib_name ${CMAKE_CURRENT_SOURCE_DIR} NAME)
project(${lib_name})

# enable_asm_language(): enables the assembly language and states that the
# .asm sources of this library are written in it (build_tools/cmake/option_asm.cmake).
include(${CMAKE_CURRENT_LIST_DIR}/../build_tools/cmake/option_asm.cmake)

if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
    if(${BUILD_ARCH} STREQUAL "x64" AND MSVC)
        enable_asm_language(ASM_MASM)
        file(GLOB src_list "src/bbs_server.c" "src/asm/win64/*-x86_64.asm")
#    elseif(${BUILD_ARCH} STREQUAL "arm64")
#        enable_language(ASM_MARMASM)
#        file(GLOB src_list "src/bbs_server.c" "src/asm/win64/*-armv8.asm")
    else()
        add_definitions(-D__BLST_NO_ASM__)
        file(GLOB src_list "src/bbs_server.c")
    endif()
else()
    if(${BUILD_ARCH} STREQUAL "arm64" OR ${BUILD_ARCH} STREQUAL "x64" OR ${BUILD_ARCH} STREQUAL "ia32" OR ${BUILD_ARCH} STREQUAL "arm")
        enable_asm_language(ASM)
        file(GLOB src_list "src/bbs_server.c" "src/asm/assembly.S")
    else()
        add_definitions(-D__BLST_NO_ASM__)
        file(GLOB src_list "src/bbs_server.c")
    endif()
endif()

include_directories(${PROJECT_SOURCE_DIR}/../openssl/include)

include(../build_tools/cmake/Library.cmake)
