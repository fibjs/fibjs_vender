include(tools/get_env.cmake)

set(libs
    exlib
    cares
    gtest
    expat
    gumbo
    gd
    tiff
    jpeg
    png
    webp
    zlib
    leveldb
    snappy
    msgpack
    pcre
    sqlite
    mongo
    umysql
    uuid
    exif
    mbedtls
    v8
    jssdk
    unzip
    uv
)

if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
    set(libs ${libs}
        winiconv
    )
else()
    set(libs ${libs}
        jemalloc
        editline
        ev
    )
endif()

if(EXISTS "../build")
    set(OUT_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../out/${CMAKE_HOST_SYSTEM_NAME}_${BUILD_ARCH}_${BUILD_TYPE}")
else()
    set(OUT_PATH "${CMAKE_CURRENT_SOURCE_DIR}/.dist/out/${CMAKE_HOST_SYSTEM_NAME}_${BUILD_ARCH}_${BUILD_TYPE}")
endif()

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

foreach(lib ${libs})
    build("${CMAKE_CURRENT_SOURCE_DIR}/${lib}" "${OUT_PATH}/${lib}")
endforeach()

foreach(lib ${libs})
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/${lib}/test")
        build("${CMAKE_CURRENT_SOURCE_DIR}/${lib}/test" "${OUT_PATH}/${lib}_test")
    endif()
endforeach()
