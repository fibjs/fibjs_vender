# get host's architecture in cmake script mode
function(gethostarch RETVAL)
    if("${${RETVAL}}" STREQUAL "")
        if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
            set(HOST_SYSTEM_PROCESSOR amd64)
        else()
            execute_process(
                COMMAND uname -m
                OUTPUT_VARIABLE HOST_SYSTEM_PROCESSOR
                OUTPUT_STRIP_TRAILING_WHITESPACE
            )
        endif()

        if(${HOST_SYSTEM_PROCESSOR} MATCHES "^(i386)|(i686)|(x86)$")
            set(${RETVAL} i386 PARENT_SCOPE)
        elseif(${HOST_SYSTEM_PROCESSOR} MATCHES "^(x86_64)|(amd64)|(AMD64)$")
            set(${RETVAL} amd64 PARENT_SCOPE)
        elseif(${HOST_SYSTEM_PROCESSOR} MATCHES "^(armv6)|(armv7)|(armv7s)|(armv7l)$")
            set(${RETVAL} arm PARENT_SCOPE)
        elseif(${HOST_SYSTEM_PROCESSOR} MATCHES "^aarch64$")
            set(${RETVAL} arm64 PARENT_SCOPE)
        elseif(${HOST_SYSTEM_PROCESSOR} MATCHES "^(mips)|(mipsel)$")
            set(${RETVAL} mips PARENT_SCOPE)
        elseif(${HOST_SYSTEM_PROCESSOR} MATCHES "^mips64$")
            set(${RETVAL} mips64 PARENT_SCOPE)
        elseif(${HOST_SYSTEM_PROCESSOR} MATCHES "^powerpc$")
            set(${RETVAL} ppc PARENT_SCOPE)
        elseif(${HOST_SYSTEM_PROCESSOR} MATCHES "^ppc64$")
            set(${RETVAL} ppc64 PARENT_SCOPE)
        endif()
    endif()
endfunction()


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
        RESULT_VARIABLE STATUS
    )

    if(STATUS AND NOT STATUS EQUAL 0)
        EXIT()
    endif()

    execute_process(WORKING_DIRECTORY "${out}"
            COMMAND make -j${BUILD_JOBS}
            RESULT_VARIABLE STATUS)

    if(STATUS AND NOT STATUS EQUAL 0)
        EXIT()
    endif()
endfunction()

include(ProcessorCount)

gethostarch(HOST_ARCH)
if(NOT DEFINED BUILD_ARCH OR "${BUILD_ARCH}" STREQUAL "")
    gethostarch(BUILD_ARCH)
endif()

if("${BUILD_TYPE}" STREQUAL "")
    set(BUILD_TYPE release)
endif()

if("${BUILD_JOBS}" STREQUAL "")
    ProcessorCount(CMAKE_HOST_SYSTEM_PROCESSOR_COUNT)
    set(BUILD_JOBS ${CMAKE_HOST_SYSTEM_PROCESSOR_COUNT})
endif()

set(ENV{CLICOLOR_FORCE} 1)

message("")
message("HOST_OS is ${CMAKE_HOST_SYSTEM_NAME}")
message("BUILD_OS is ${CMAKE_HOST_SYSTEM_NAME}")
message("HOST_ARCH is ${HOST_ARCH}")
message("BUILD_ARCH is ${BUILD_ARCH}")
message("BUILD_TYPE is ${BUILD_TYPE}")
message("BUILD_JOBS is ${BUILD_JOBS}")
message("")
