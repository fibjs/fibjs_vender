cmake_minimum_required(VERSION 2.6)

if(${ARCH} STREQUAL "amd64")
    add_definitions(-DUSE_ASM_LIB=1)

    if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
        enable_language(ASM_MASM)
        file(GLOB_RECURSE src_list "src/*.c" "src/*.asm")
    else()
        if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Linux")
            enable_language(ASM-ATT)
        else()
            enable_language(ASM)
        endif()

        file(GLOB_RECURSE src_list "src/*.c" "src/*.s")
        include_directories("${PROJECT_SOURCE_DIR}/src/asm64/amd64.gnu")
    endif()

    list(REMOVE_ITEM src_list "${PROJECT_SOURCE_DIR}/src/curve25519_mehdi.c")
    list(REMOVE_ITEM src_list "${PROJECT_SOURCE_DIR}/src/curve25519_order.c")
    list(REMOVE_ITEM src_list "${PROJECT_SOURCE_DIR}/src/curve25519_utils.c")
else()
    file(GLOB src_list "src/*.c")
endif()

if(${ARCH} STREQUAL "mips64" OR ${ARCH} STREQUAL "mips")
    add_definitions(-DECP_CONFIG_BIG_ENDIAN=1)
endif()

include_directories("${PROJECT_SOURCE_DIR}/src")

include(../build_tools/cmake/Library.cmake)
