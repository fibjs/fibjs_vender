include(../tools/arch.cmake)
include(../tools/os.cmake)

project(${name})

file(GLOB_RECURSE src_list "src/*.c*")
add_library(${name} ${src_list})

SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/../../bin/${OS}_${BUILD_TYPE}/vender)

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

set(CMAKE_C_FLAGS "${flags}")
set(CMAKE_CXX_FLAGS "${flags} ${ccflags}")

if(link_flags)
	set_target_properties(${name} PROPERTIES LINK_FLAGS ${link_flags})
endif()

include_directories(${PROJECT_SOURCE_DIR} "${PROJECT_SOURCE_DIR}/include" "${PROJECT_SOURCE_DIR}/../" "/usr/local/include/")
