cmake_minimum_required(VERSION 3.5)

include(CheckStructHasMember)
include(CheckIncludeFiles)

include_directories(${PROJECT_SOURCE_DIR}/src)

if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Linux")
    add_definitions(
        -DHAVE_LINUX_IF_ADDR_H
        -DHAVE_LINUX_RTNETLINK_H
        -D_GNU_SOURCE
    )
elseif(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Darwin")
    add_definitions(
        -D__APPLE_USE_RFC_2292
        -DHAVE_SA_LEN
        -DHAVE_SCONN_LEN
        -DHAVE_SIN6_LEN
        -DHAVE_SIN_LEN
    )
endif()

add_definitions(
    -DINET
    -DINET6
    -DSCTP_PROCESS_LEVEL_LOCKS
    -DSCTP_SIMPLE_ALLOCATOR
    -D__Userspace__
)

include(../build_tools/cmake/Library.cmake)
