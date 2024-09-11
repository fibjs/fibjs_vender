include(CheckIncludeFileCXX)

if(NOT ${BUILD_OS} STREQUAL "Windows")
	unset(HAS_COMPARE CACHE)
	CHECK_INCLUDE_FILE_CXX(compare HAS_COMPARE)

	if(NOT HAS_COMPARE)
		include_directories("${CMAKE_CURRENT_LIST_DIR}/include/10")
	endif()
endif()
