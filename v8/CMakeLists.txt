cmake_minimum_required(VERSION 3.5)

if("${BUILD_OS}" STREQUAL "Windows")
	add_definitions(-DUNICODE)
	if("${BUILD_ARCH}" STREQUAL "arm64")
        set(CMAKE_ASM_NASM_SOURCE_FILE_EXTENSIONS asm S)
        set(CMAKE_ASM_NASM_COMPILER ${PROJECT_SOURCE_DIR}/patch/bin/asm.exe)
		enable_language(ASM_NASM)
	else()
		enable_language(ASM_MASM)
	endif()
else()
	enable_language(ASM)
endif()

include(cmake/options.cmake)

if("${BUILD_OS}" STREQUAL "Alpine")
	include(cmake/v8-${BUILD_ARCH}-Linux.cmake)
elseif("${BUILD_ARCH}" STREQUAL "loong64ow")
	include(cmake/v8-loong64-${BUILD_OS}.cmake)
else()
	include(cmake/v8-${BUILD_ARCH}-${BUILD_OS}.cmake)
endif()

set(CMAKE_CXX_STANDARD 17)

include(../build_tools/cmake/Library.cmake)
