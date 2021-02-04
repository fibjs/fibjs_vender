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

    if(NOT DEFINED HOST_ARCH)
        message( FATAL_ERROR "[get_env::build] BUILD_TYPE haven't been set, check your input.")
    endif()

    if(NOT DEFINED HOST_ARCH)
        message( FATAL_ERROR "[get_env::build] HOST_ARCH haven't been set, call `gethostarch(HOST_ARCH)` before `build()`")
    endif()

    execute_process(WORKING_DIRECTORY "${out}"
        OUTPUT_FILE CMake.log 
        COMMAND ${CMAKE_COMMAND}
            -Wno-dev
            -DCMAKE_MAKE_PROGRAM=make
            -G "Unix Makefiles"
            -DCMAKE_C_COMPILER=clang
            -DCMAKE_CXX_COMPILER=clang++
            -DHOST_ARCH=${HOST_ARCH}
            -DARCH=${BUILD_ARCH}
            -DBUILD_TYPE=${BUILD_TYPE}
            "${src}"
        RESULT_VARIABLE STATUS
        ERROR_VARIABLE BUILD_ERROR
    )

    if(STATUS AND NOT STATUS EQUAL 0)
        message("[get_env::build::error::cmake] for '${out}'")
        message(FATAL_ERROR "${BUILD_ERROR}")
    endif()

    execute_process(WORKING_DIRECTORY "${out}"
        COMMAND make -j${BUILD_JOBS}
        RESULT_VARIABLE STATUS
        ERROR_VARIABLE BUILD_ERROR
    )

    if(STATUS AND NOT STATUS EQUAL 0)
        message("[get_env::build::error::make] for '${out}'")
        message(FATAL_ERROR "${BUILD_ERROR}")
    endif()
endfunction()

function(prepare_platform)
    if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
        # @todo set EnvVar to tell clang use VS2017 rather than newest one if it's not VS2017
        #
        # by default, clang/LLVM would find newest VCToolChain, if you install both VS2017 and VS2019
        # VS2019's VCTools would be used to compile vender, but v8 6.9 cannot be compiled with it, we must
        # tell clang to use VS2017's VCToolChain
        if(NOT DEFINED VCToolsInstallDir)
            if("$ENV{ProgramW6432}" STREQUAL "")
                set(PROGRAM_FILES_X86 "$ENV{ProgramFiles\(x86\)}")
            else()
                set(PROGRAM_FILES_X86 "$ENV{ProgramW6432} (x86)")
            endif()
            message("[win32] PROGRAM_FILES_X86 is ${PROGRAM_FILES_X86}")
            
            execute_process(
                WORKING_DIRECTORY "${out}"
                COMMAND "${PROGRAM_FILES_X86}\\Microsoft\ Visual\ Studio\\Installer\\vswhere.exe" -property installationPath -version "[15.0, 16.0)"
                OUTPUT_VARIABLE VS_INSTALLPATH
                OUTPUT_STRIP_TRAILING_WHITESPACE
            )

            file(STRINGS "${VS_INSTALLPATH}\\VC\\Auxiliary\\Build\\Microsoft.VCToolsVersion.default.txt" CUR_MSVC_1900_VER)
            message("[win32] CUR_MSVC_1900_VER is ${CUR_MSVC_1900_VER}")

            set(ENV{VCToolsInstallDir} "${VS_INSTALLPATH}\\VC\\Tools\\MSVC\\${CUR_MSVC_1900_VER}")
            message("[win32] ENV{VCToolsInstallDir} is $ENV{VCToolsInstallDir}")
        endif()
    endif()
endfunction()

function(rimraf TARGET)
    if(EXISTS "${TARGET}")
        file(REMOVE_RECURSE ${TARGET})
        message("removed ${BIN_ROOT}/${DIST_DIRNAME}")
    else()
        message("path '${BIN_ROOT}/${DIST_DIRNAME}' didn't existed, no removal required.")
    endif()
endfunction()

include(ProcessorCount)

prepare_platform()
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
