cmake_minimum_required(VERSION 3.10)

get_filename_component(lib_name ${CMAKE_CURRENT_SOURCE_DIR} NAME)
project(${lib_name})

# c-ares 1.34.8, static library.
#
# Sources live under src/lib only (src/tools is not vendored), so the source
# list is picked up by option_src.cmake's glob like the other vender libraries.
# See README.md for the exact upstream provenance of every subtree.

# Same include set as node's cares.gyp: the public headers, ares_private.h's
# neighbours and src/lib/include (ares_mem.h & friends).
include_directories(${PROJECT_SOURCE_DIR}/src/lib ${PROJECT_SOURCE_DIR}/src/lib/include)

set(cares_defines CARES_STATICLIB)

if(WIN32)
    # Windows uses src/lib/config-win32.h (ares_setup.h), no ares_config.h.
    list(APPEND cares_defines
        CARES_PULL_WS2TCPIP_H=1
        _WINSOCK_DEPRECATED_NO_WARNINGS)
else()
    # POSIX: ares_setup.h includes ares_config.h when HAVE_CONFIG_H is set;
    # the per-OS file is selected below (same scheme as node's cares.gyp).
    list(APPEND cares_defines
        HAVE_CONFIG_H
        _GNU_SOURCE
        _LARGEFILE_SOURCE
        _FILE_OFFSET_BITS=64)

    if(BUILD_OS MATCHES "iPhone")
        # The iOS SDK has no <sys/random.h>: config/iphone is config/darwin
        # without it (see the file).
        set(cares_config_dir iphone)
    elseif(APPLE)
        set(cares_config_dir darwin)
    elseif(BUILD_OS MATCHES "Android")
        # The Android build uses a standalone NDK toolchain without a CMake
        # toolchain file, so CMAKE_SYSTEM_NAME is the Linux host: BUILD_OS,
        # set from the compiler triple by get_compiler.cmake, is the flag
        # that actually says "Android".  bionic has no getservbyport_r()/
        # getservbyname_r(), config/android undefines both.
        set(cares_config_dir android)
    elseif(CMAKE_SYSTEM_NAME MATCHES "FreeBSD|DragonFly")
        set(cares_config_dir freebsd)
    elseif(CMAKE_SYSTEM_NAME MATCHES "NetBSD")
        set(cares_config_dir netbsd)
    elseif(CMAKE_SYSTEM_NAME MATCHES "OpenBSD")
        set(cares_config_dir openbsd)
    elseif(CMAKE_SYSTEM_NAME MATCHES "SunOS")
        set(cares_config_dir sunos)
    elseif(CMAKE_SYSTEM_NAME MATCHES "AIX")
        set(cares_config_dir aix)
    elseif(CMAKE_SYSTEM_NAME MATCHES "CYGWIN")
        set(cares_config_dir cygwin)
    else()
        # Linux and musl/Alpine both use the Linux configuration.
        set(cares_config_dir linux)
    endif()

    include_directories(${PROJECT_SOURCE_DIR}/config/${cares_config_dir})
endif()

include(../build_tools/cmake/Library.cmake)

target_compile_definitions(${PROJECT_NAME} PRIVATE ${cares_defines})

if(NOT WIN32)
    # c-ares 1.34 is C99+; node builds it with --std=gnu11 as well.
    target_compile_options(${PROJECT_NAME} PRIVATE -std=gnu11)
endif()
