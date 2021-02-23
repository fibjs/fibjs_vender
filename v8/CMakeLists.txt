cmake_minimum_required(VERSION 2.6)

if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
	add_definitions(-D_UNICODE -DUNICODE -D_WIN32_WINNT=0x0600)
else()
	include_directories("/usr/local/include/")
endif()

file(GLOB_RECURSE src_list "src/*.c*" "gen/*.c*")

include(../tools/Library.cmake)

include_directories(
	${PROJECT_SOURCE_DIR}
	"${PROJECT_SOURCE_DIR}/gen"
	"${PROJECT_SOURCE_DIR}/gen/include"
)

add_definitions(
	-DV8_NO_FAST_TLS=1
	-DV8_DEPRECATION_WARNINGS=1
	-DV8_CONCURRENT_MARKING=1
	-DENABLE_HANDLE_ZAPPING=1
	-DDISABLE_UNTRUSTED_CODE_MITIGATIONS=1
)

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
