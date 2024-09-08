include_directories(
	${CMAKE_CURRENT_LIST_DIR}/../patch
	${CMAKE_CURRENT_LIST_DIR}/..
	${CMAKE_CURRENT_LIST_DIR}/../include
	${CMAKE_CURRENT_LIST_DIR}/../../unicode/include
	${CMAKE_CURRENT_LIST_DIR}/../third_party/fp16/src/include
)

if(${BUILD_ARCH} MATCHES "64")
	include_directories(${CMAKE_CURRENT_LIST_DIR}/../gen/64)
else()
	include_directories(${CMAKE_CURRENT_LIST_DIR}/../gen/32)
endif()

include_directories("${CMAKE_CURRENT_LIST_DIR}/../../abseil")

include(CheckIncludeFileCXX)
unset(HAS_COMPARE CACHE)
CHECK_INCLUDE_FILE_CXX(compare HAS_COMPARE)

if(NOT HAS_COMPARE)
	include_directories("${CMAKE_CURRENT_LIST_DIR}/../../libc/include/10")
endif()

if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
	add_definitions(
		-D_WIN32_WINNT=0x0602
		-DV8_ENABLE_ETW_STACK_WALKING
		-D_SILENCE_ALL_CXX20_DEPRECATION_WARNINGS
	)
	set(flags "${flags} /Zc:__cplusplus")
endif()

add_definitions(
	-DV8_NO_FAST_TLS

	-DV8_INTL_SUPPORT
	-DV8_ATOMIC_OBJECT_FIELD_WRITES
	-DV8_SHARED_RO_HEAP
	-DV8_WIN64_UNWINDING_INFO
	-DV8_ENABLE_WEBASSEMBLY
	-DV8_ADVANCED_BIGINT_ALGORITHMS
	-DV8_ENABLE_TURBOFAN
)

if("${BUILD_ARCH}" STREQUAL "x64")
	add_definitions(-DV8_ENABLE_WASM_SIMD256_REVEC)
endif()

if("${BUILD_OS}" STREQUAL "iPhone")
	add_definitions(-DV8_JITLESS)
endif()

if(${BUILD_TYPE} STREQUAL "debug")
	add_definitions(
		-DOBJECT_PRINT
		-DENABLE_DISASSEMBLER
		-DV8_ENABLE_CHECKS
		-DTRACE_MAPS
	)

	if(MSVC)
		set(flags "${flags} -W0")
	else()
		set(flags "${flags} -w")
	endif()
endif()
