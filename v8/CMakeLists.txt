cmake_minimum_required(VERSION 2.6)

if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
	set(CXX_STD_VER_FLAG "-std=c++14")
	add_definitions(-fno-strict-aliasing -fno-short-enums)
	add_definitions(-D_UNICODE -DUNICODE)
	# @warning on Windows, v8 at this version could emit a big deal of DBG about symbols
	# so we enable at lease -O2 level optimization
	if(NOT ${BUILD_TYPE} STREQUAL "release")
		set(flags "${flags} -O2")
	endif()
else()
	include_directories("/usr/local/include/")
endif()

include_directories(
	${PROJECT_SOURCE_DIR}
	"${PROJECT_SOURCE_DIR}/src"
	"${PROJECT_SOURCE_DIR}/include"
	"${PROJECT_SOURCE_DIR}/../"
)

include(../tools/basic.cmake)

add_definitions(
	-DV8_NO_FAST_TLS=1
	-DV8_DEPRECATION_WARNINGS=1
	-DV8_CONCURRENT_MARKING=1
	-DENABLE_HANDLE_ZAPPING=1
	-DDISABLE_UNTRUSTED_CODE_MITIGATIONS=1
)

if(${OS} STREQUAL "Windows")
	# always disable debug for MSVC(1925, VS 2019) + v8(6.9), maybe cancel in the future
	add_definitions(-DNDEBUG)
else()
	if(${BUILD_TYPE} STREQUAL "Debug")
		add_definitions(
			-DVERIFY_HEAP=1
			-DOBJECT_PRINT=1
			-DENABLE_DISASSEMBLER=1
			-DV8_ENABLE_CHECKS=1
			-DTRACE_MAPS=1
			-DENABLE_SLOW_DCHECKS=1
		)
	endif()
endif()
