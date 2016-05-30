include(../../tools/arch.cmake)
include(../../tools/os.cmake)

project(${name}_test)

file(GLOB_RECURSE src_list "src/*.c*")
add_executable(${name}_test ${src_list})

set(BIN_DIR ${PROJECT_SOURCE_DIR}/../../../bin/${OS}_${BUILD_TYPE}/vender)
set(EXECUTABLE_OUTPUT_PATH ${BIN_DIR})

if(NOT flags)
	set(flags " ")
endif()

set(flags "${flags} -fsigned-char -fmessage-length=0 -fdata-sections -ffunction-sections -fno-exceptions -D_FILE_OFFSET_BITS=64")
set(link_flags " ")

if(${OS} STREQUAL "Darwin")
	set(flags "${flags} -mmacosx-version-min=10.9")
endif()

if(${BUILD_TYPE} STREQUAL "Release32")
	set(flags "${flags} -O3 -m32 -w -fomit-frame-pointer -fvisibility=hidden")
	set(link_flags "${link_flags} -m32")
	set(BUILD_TYPE "Release")
endif()

if(${BUILD_TYPE} STREQUAL "Debug32")
	set(flags "${flags} -g -O0 -m32 -Wall")
	set(link_flags "${link_flags} -m32")
	set(BUILD_TYPE "Debug")
endif()

if(${BUILD_TYPE} STREQUAL "Release")
	set(flags "${flags} -O3 -w -fomit-frame-pointer -fvisibility=hidden")
	add_definitions(-DNDEBUG=1)
endif()

if(${BUILD_TYPE} STREQUAL "Debug")
	set(flags "${flags} -g -O0 -Wall")
	add_definitions(-DDEBUG=1)
endif()

set_target_properties(${name}_test PROPERTIES COMPILE_FLAGS ${flags})

if(libs)
	foreach(lib ${libs})
		target_link_libraries(${name}_test "${BIN_DIR}/lib${lib}.a")
	endforeach()
endif()

target_link_libraries(${name}_test "${BIN_DIR}/lib${name}.a")
target_link_libraries(${name}_test "${BIN_DIR}/libgtest.a")

if(link_flags)
	set_target_properties(${name}_test PROPERTIES LINK_FLAGS ${link_flags})
endif()

target_link_libraries(${name}_test pthread)

include_directories(${PROJECT_SOURCE_DIR}/../ "${PROJECT_SOURCE_DIR}/../include" "${PROJECT_SOURCE_DIR}/../../" "/usr/local/include/")
