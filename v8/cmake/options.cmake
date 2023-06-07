include_directories(
	${CMAKE_CURRENT_LIST_DIR}/../patch
	${CMAKE_CURRENT_LIST_DIR}/..
	${CMAKE_CURRENT_LIST_DIR}/../include
	${CMAKE_CURRENT_LIST_DIR}/../../unicode/include
)

if(${ARCH} MATCHES "64")
	include_directories(${CMAKE_CURRENT_LIST_DIR}/../gen/64)
else()
	include_directories(${CMAKE_CURRENT_LIST_DIR}/../gen/32)
endif()

if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
	add_definitions(-D_WIN32_WINNT=0x0602)
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
