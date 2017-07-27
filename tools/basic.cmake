include(../tools/os.cmake)
include(../tools/arch.cmake)

project(${name})

find_program(CCACHE_FOUND ccache)
if(CCACHE_FOUND)
	set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE ccache)
	set_property(GLOBAL PROPERTY RULE_LAUNCH_LINK ccache)
endif(CCACHE_FOUND)

file(GLOB_RECURSE src_list "src/*.c*")
add_library(${name} ${src_list})

SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/../../bin/${OS}_${ARCH}_${BUILD_TYPE})

if(NOT flags)
	set(flags " ")
endif()
set(flags "${flags} -fsigned-char -fmessage-length=0 -fdata-sections -ffunction-sections -fno-exceptions -D_FILE_OFFSET_BITS=64")

if(NOT ccflags)
	set(ccflags " ")
endif()
set(ccflags "${ccflags} -std=c++11")

set(link_flags " ")

if(${OS} STREQUAL "Darwin")
	set(flags "${flags} -mmacosx-version-min=10.9")
endif()

if(${BUILD_TYPE} STREQUAL "release")
	set(flags "${flags} -O3 -s ${BUILD_OPTION} -w -fvisibility=hidden")

	if(${OS} STREQUAL "FreeBSD")
		set(flags "${flags} -fno-omit-frame-pointer")
	else()
		set(flags "${flags} -fomit-frame-pointer")
	endif()

	set(link_flags "${link_flags} ${BUILD_OPTION}")
	add_definitions(-DNDEBUG=1)
endif()

if(${BUILD_TYPE} STREQUAL "debug")
	set(flags "${flags} -g -O0 ${BUILD_OPTION} -Wall")
	set(link_flags "${link_flags} ${BUILD_OPTION}")
	add_definitions(-DDEBUG=1)
endif()

set(CMAKE_C_FLAGS "${flags}")
set(CMAKE_CXX_FLAGS "${flags} ${ccflags}")

if(link_flags)
	set_target_properties(${name} PROPERTIES LINK_FLAGS ${link_flags})
endif()

include_directories(${PROJECT_SOURCE_DIR} "${PROJECT_SOURCE_DIR}/include" "${PROJECT_SOURCE_DIR}/../")
