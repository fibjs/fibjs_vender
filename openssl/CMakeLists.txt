cmake_minimum_required(VERSION 3.5)

if("${BUILD_OS}" STREQUAL "Windows")
    set(CMAKE_ASM_NASM_COMPILER ${PROJECT_SOURCE_DIR}/tools/nasm.exe)
    enable_language(ASM_NASM)
    include(./cmake/windows_${BUILD_ARCH}.cmake)
else()
    enable_language(ASM)

    if("${BUILD_OS}" STREQUAL "Darwin" OR "${BUILD_OS}" STREQUAL "iPhone")
        include(./cmake/darwin_${BUILD_ARCH}.cmake)
    elseif("${BUILD_ARCH}" STREQUAL "loong64ow")
        include(./cmake/linux_loong64.cmake)
    else()
        include(./cmake/linux_${BUILD_ARCH}.cmake)
    endif()
endif()

include_directories(
    "src/providers/common/include"
    "src/providers/implementations/include"
    "src/crypto"
    "src"
)

if("${BUILD_OS}" STREQUAL "Windows")
    add_definitions(
        -DWIN32_LEAN_AND_MEAN
        -DUSE_BCRYPTGENRANDOM
    )
endif()

add_definitions(
    -DOPENSSL_THREADS
    -DOPENSSL_NO_STATIC_ENGINE
    -DOPENSSL_NO_CAPIENG
    -DOPENSSL_NO_ASYNC

    -DOPENSSLDIR=""
    -DENGINESDIR=""
    -DMODULESDIR=""
)

include(../build_tools/cmake/Library.cmake)
