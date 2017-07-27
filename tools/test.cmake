include(../../tools/arch.cmake)
include(../../tools/os.cmake)

project(${name}_test)

file(GLOB_RECURSE src_list "src/*.c*")
add_executable(${name}_test ${src_list})

set(BIN_DIR ${PROJECT_SOURCE_DIR}/../../../bin/${OS}_${ARCH}_${BUILD_TYPE})
set(EXECUTABLE_OUTPUT_PATH ${BIN_DIR})

if(NOT flags)
	set(flags " ")
endif()
set(flags "${flags} -fsigned-char -fmessage-length=0 -fdata-sections -ffunction-sections -fno-exceptions -D_FILE_OFFSET_BITS=64")

if(NOT ccflags)
	set(ccflags " ")
endif()
set(ccflags "${ccflags} -std=c++11")

set(link_flags " ")

target_link_libraries(${name}_test "${BIN_DIR}/libgtest.a")
target_link_libraries(${name}_test "${BIN_DIR}/lib${name}.a")

if(libs)
	foreach(lib ${libs})
		target_link_libraries(${name}_test "${BIN_DIR}/lib${lib}.a")
	endforeach()
endif()

if(${OS} STREQUAL "Darwin")
	set(link_flags "${link_flags} -mmacosx-version-min=10.9")
	set(flags "${flags} -mmacosx-version-min=10.9")
	target_link_libraries(${name}_test dl iconv stdc++)
endif()

if(${OS} STREQUAL "Linux")
	target_link_libraries(${name}_test dl rt)
endif()

if(${OS} STREQUAL "FreeBSD")
	find_library(execinfo execinfo "/usr/local/lib" "/usr/lib")
	target_link_libraries(${name}_test ${execinfo})
endif()

if(${BUILD_TYPE} STREQUAL "release")
	set(flags "${flags} -O3 -s ${BUILD_OPTION} -w -fomit-frame-pointer -fvisibility=hidden")
	set(link_flags "${link_flags} ${BUILD_OPTION}")
	add_definitions(-DNDEBUG=1)

	if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
		set(link_flags "${link_flags} -static-libgcc -static-libstdc++ -Wl,--no-as-needed")
	endif()
endif()

if(${BUILD_TYPE} STREQUAL "debug")
	set(flags "${flags} -g -O0 ${BUILD_OPTION} -Wall")
	set(link_flags "${link_flags} ${BUILD_OPTION}")
	add_definitions(-DDEBUG=1)
endif()

set(CMAKE_C_FLAGS "${flags}")
set(CMAKE_CXX_FLAGS "${flags} ${ccflags}")

target_link_libraries(${name}_test pthread)

include_directories(${PROJECT_SOURCE_DIR}/../ "${PROJECT_SOURCE_DIR}/../include" "${PROJECT_SOURCE_DIR}/../../")

if(link_flags)
	set_target_properties(${name}_test PROPERTIES LINK_FLAGS ${link_flags})
endif()