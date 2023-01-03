include_directories(${PROJECT_SOURCE_DIR})

if(${ARCH} MATCHES "64")
	include_directories(${PROJECT_SOURCE_DIR}/gen/64)
else()
	include_directories(${PROJECT_SOURCE_DIR}/gen/32)
endif()

if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
	add_definitions(-DUNICODE -D_WIN32_WINNT=0x0602)
endif()

add_definitions(
	-DV8_NO_FAST_TLS

	-DV8_ATOMIC_OBJECT_FIELD_WRITES
	-DV8_SHARED_RO_HEAP
	-DV8_WIN64_UNWINDING_INFO
	-DV8_ENABLE_WEBASSEMBLY
	-DV8_ADVANCED_BIGINT_ALGORITHMS
)

if(${BUILD_TYPE} STREQUAL "debug")
	add_definitions(
		# enable of this option would make compilation error
		# -DVERIFY_HEAP=1
		-DOBJECT_PRINT
		-DENABLE_DISASSEMBLER
		-DV8_ENABLE_CHECKS
		-DTRACE_MAPS
		-DV8_ENABLE_SWISS_NAME_DICTIONARY
		# enable of this option would make jssdk::createRuntime suspend
		# -DENABLE_SLOW_DCHECKS=1
	)
endif()
