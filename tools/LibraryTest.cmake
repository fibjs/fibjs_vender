include(../../tools/arch.cmake)
include(../../tools/os.cmake)
include(../../tools/platform.cmake)

project(${name}_test)

file(GLOB_RECURSE src_list "src/*.c*")
add_executable(${name}_test ${src_list})

set(VENDER_ROOT ${PROJECT_SOURCE_DIR}/../../)

if((${USED_BY_FIBJS}) STREQUAL "1")
	set(BIN_DIR ${VENDER_ROOT}/../bin/${OS}_${ARCH}_${BUILD_TYPE})
else()
	set(BIN_DIR ${VENDER_ROOT}/.dist/bin/${OS}_${ARCH}_${BUILD_TYPE})
endif()

set(EXECUTABLE_OUTPUT_PATH ${BIN_DIR})

if(NOT flags)
	set(flags " ")
endif()
set(flags "${flags} -fsigned-char -fmessage-length=0 -fdata-sections -ffunction-sections -D_FILE_OFFSET_BITS=64")

if(NOT ccflags)
	set(ccflags " ")
endif()
set(ccflags "${ccflags} ${CXX_STD_VER_FLAG}")

set(link_flags " ")

target_link_libraries(${name}_test "${BIN_DIR}/${CMAKE_STATIC_LIBRARY_PREFIX}gtest${CMAKE_STATIC_LIBRARY_SUFFIX}")
target_link_libraries(${name}_test "${BIN_DIR}/${CMAKE_STATIC_LIBRARY_PREFIX}${name}${CMAKE_STATIC_LIBRARY_SUFFIX}")

if(libs)
	foreach(lib ${libs})
		target_link_libraries(${name}_test "${BIN_DIR}/${CMAKE_STATIC_LIBRARY_PREFIX}${lib}${CMAKE_STATIC_LIBRARY_SUFFIX}")
	endforeach()
endif()

if(${OS} STREQUAL "Darwin")
	set(link_flags "${link_flags} -mmacosx-version-min=10.9")
	set(flags "${flags} -mmacosx-version-min=10.9")
	target_link_libraries(${name}_test dl iconv stdc++)
endif()

if(${OS} STREQUAL "Windows")
	add_definitions(-DWIN32 -D_LIB -D_CRT_SECURE_NO_WARNINGS -D_CRT_RAND_S -DNOMINMAX)
	set(flags "${flags} -fms-extensions -fmsc-version=1910 -frtti")
	set(link_flags "${link_flags} -ldbghelp -lwinmm -lshlwapi")
	
	if(${ARCH} STREQUAL "amd64")
		set(flags "${flags} -m64")
	elseif(${ARCH} STREQUAL "i386")
		set(flags "${flags} -m32")
	endif()
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
	set(link_flags "${link_flags} ${BUILD_OPTION} -static-libstdc++")
	add_definitions(-DNDEBUG=1)

	if(${OS} STREQUAL "Linux")
		set(link_flags "${link_flags} ${link_flags} -static-libgcc")
	endif()
endif()

if(${BUILD_TYPE} STREQUAL "debug")
	set(flags "${flags} -g -O0 ${BUILD_OPTION} -Wall")
	set(link_flags "${link_flags} ${BUILD_OPTION}")
	add_definitions(-DDEBUG=1)
endif()

set(CMAKE_C_FLAGS "${flags}")
set(CMAKE_CXX_FLAGS "${flags} ${ccflags}")

if(NOT ${OS} STREQUAL "Windows")
	target_link_libraries(${name}_test pthread)
endif()

include_directories(${PROJECT_SOURCE_DIR}/../ "${PROJECT_SOURCE_DIR}/../include" "${PROJECT_SOURCE_DIR}/../../")

if(link_flags)
	set_target_properties(${name}_test PROPERTIES LINK_FLAGS ${link_flags})
endif()