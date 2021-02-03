function(build src out)
    file(MAKE_DIRECTORY "${out}")

    execute_process(WORKING_DIRECTORY "${out}"
        OUTPUT_FILE CMake.log 
        COMMAND ${CMAKE_COMMAND}
            -Wno-dev
            -DCMAKE_MAKE_PROGRAM=make
            -G "Unix Makefiles"
            -DCMAKE_C_COMPILER=clang
            -DCMAKE_CXX_COMPILER=clang++
            -DARCH=${BUILD_ARCH}
            -DBUILD_TYPE=${BUILD_TYPE}
            "${src}"
    )

    execute_process(WORKING_DIRECTORY "${out}"
            COMMAND make
            -j${BUILD_JOBS})
endfunction()

include(ProcessorCount)

if("${BUILD_ARCH}" STREQUAL "")
    if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
        set(CMAKE_HOST_SYSTEM_PROCESSOR amd64)
    else()
        execute_process(COMMAND uname -m COMMAND tr -d '\n' OUTPUT_VARIABLE CMAKE_HOST_SYSTEM_PROCESSOR)
    endif()

    if(${CMAKE_HOST_SYSTEM_PROCESSOR} MATCHES "^(i386)|(i686)|(x86)$")
        set(BUILD_ARCH i386)
    elseif(${CMAKE_HOST_SYSTEM_PROCESSOR} MATCHES "^(x86_64)|(amd64)|(AMD64)$")
        set(BUILD_ARCH amd64)
    elseif(${CMAKE_HOST_SYSTEM_PROCESSOR} MATCHES "^(armv6)|(armv7)|(armv7s)|(armv7l)$")
        set(BUILD_ARCH arm)
    elseif(${CMAKE_HOST_SYSTEM_PROCESSOR} MATCHES "^aarch64$")
        set(BUILD_ARCH arm64)
    elseif(${CMAKE_HOST_SYSTEM_PROCESSOR} MATCHES "^(mips)|(mipsel)$")
        set(BUILD_ARCH mips)
    elseif(${CMAKE_HOST_SYSTEM_PROCESSOR} MATCHES "^mips64$")
        set(BUILD_ARCH mips64)
    elseif(${CMAKE_HOST_SYSTEM_PROCESSOR} MATCHES "^powerpc$")
        set(BUILD_ARCH ppc)
    elseif(${CMAKE_HOST_SYSTEM_PROCESSOR} MATCHES "^ppc64$")
        set(BUILD_ARCH ppc64)
    endif()
endif()

ProcessorCount(CMAKE_HOST_SYSTEM_PROCESSOR_COUNT)

if("${BUILD_TYPE}" STREQUAL "")
    set(BUILD_TYPE release)
endif()

if("${BUILD_JOBS}" STREQUAL "")
    set(BUILD_JOBS ${CMAKE_HOST_SYSTEM_PROCESSOR_COUNT})
endif()

set(ENV{CLICOLOR_FORCE} 1)

message("")
message("BUILD_OS is ${CMAKE_HOST_SYSTEM_NAME}")
message("BUILD_ARCH is ${BUILD_ARCH}")
message("BUILD_TYPE is ${BUILD_TYPE}")
message("BUILD_JOBS is ${BUILD_JOBS}")
message("")
