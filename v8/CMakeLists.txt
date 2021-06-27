cmake_minimum_required(VERSION 2.6)

if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
	add_definitions(-D_UNICODE -DUNICODE -D_WIN32_WINNT=0x0600)
else()
	include_directories("/usr/local/include/")
endif()

file(GLOB_RECURSE src_list "src/*.c*" "gen/*.c*")

file(GLOB_RECURSE temp_excluded_list
	"src/trap-handler/handler-inside-*.*"
	"src/trap-handler/handler-outside-*.*"
	"src/unwinding-info-win64.h"
	"src/unwinding-info-win64.cc"
)
list(REMOVE_ITEM src_list ${temp_excluded_list})

if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
	if (${ARCH} STREQUAL "amd64")
		list(APPEND src_list
			"src/trap-handler/handler-inside-win.cc"
			"src/trap-handler/handler-outside-win.cc"
			"src/unwinding-info-win64.cc"
		)
	endif()
elseif(${ARCH} STREQUAL "amd64")
	list(APPEND src_list
		"src/trap-handler/handler-inside-posix.cc"
		"src/trap-handler/handler-outside-posix.cc"
	)
endif()

# if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows" AND ${ARCH} STREQUAL "amd64")
# 	set_property(SOURCE src/unwinding-info-win64.cc
# 		APPEND PROPERTY
# 		COMPILE_DEFINITIONS
# 		UNICODE
# 		_WIN32_WINNT=0x0602
# 	)
	
# 	list(APPEND src_list
# 		"src/unwinding-info-win64.cc"
# 	)
# endif()

list(APPEND src_list ${snapshots_list} ${trap_handler_list})

if(${ARCH} STREQUAL "mips" OR ${ARCH} STREQUAL "mips64")
	set(flags "${flags} -Wno-c++11-narrowing")
endif()

include(../build_tools/cmake/Library.cmake)

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
	-DV8_TYPED_ARRAY_MAX_SIZE_IN_HEAP=64
)

if(${BUILD_TYPE} STREQUAL "debug")
	add_definitions(
		# enable of this option would make compilation error
		# -DVERIFY_HEAP=1
		-DOBJECT_PRINT=1
		-DENABLE_DISASSEMBLER=1
		-DV8_ENABLE_CHECKS=1
		-DTRACE_MAPS=1
		# enable of this option would make jssdk::createRuntime suspend
		# -DENABLE_SLOW_DCHECKS=1
	)
endif()
