cmake_minimum_required(VERSION 3.10)

get_filename_component(lib_name ${CMAKE_CURRENT_SOURCE_DIR} NAME)
project(${lib_name})

# enable_asm_language(): enables the assembly language and states that the
# .asm sources of this library are written in it (build_tools/cmake/option_asm.cmake).
include(${CMAKE_CURRENT_LIST_DIR}/../build_tools/cmake/option_asm.cmake)

if("${BUILD_OS}" STREQUAL "Windows")
	add_definitions(-DUNICODE)
	if("${BUILD_ARCH}" STREQUAL "arm64")
        set(CMAKE_ASM_NASM_SOURCE_FILE_EXTENSIONS asm S)
        set(CMAKE_ASM_NASM_COMPILER ${PROJECT_SOURCE_DIR}/patch/bin/asm.exe)
		enable_asm_language(ASM_NASM)
	else()
		enable_asm_language(ASM_MASM)
	endif()
else()
	enable_asm_language(ASM)
endif()

include(cmake/options.cmake)

if("${BUILD_OS}" STREQUAL "Alpine")
	include(cmake/v8-${BUILD_ARCH}-Linux.cmake)
elseif("${BUILD_ARCH}" STREQUAL "loong64ow")
	include(cmake/v8-loong64-${BUILD_OS}.cmake)
elseif("${BUILD_OS}" MATCHES "iPhone")
	include(cmake/v8-${BUILD_ARCH}-iPhone.cmake)
else()
	include(cmake/v8-${BUILD_ARCH}-${BUILD_OS}.cmake)
endif()

include(../build_tools/cmake/Library.cmake)
