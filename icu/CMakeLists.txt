cmake_minimum_required(VERSION 2.6)

include_directories("${PROJECT_SOURCE_DIR}/src/common/")

add_definitions(
	-DU_COMMON_IMPLEMENTATION=1
	-DU_I18N_IMPLEMENTATION=1
	-DU_STATIC_IMPLEMENTATION=1
)

include(../tools/basic.cmake)