if(${ARCH} STREQUAL "i386")
    set(BUILD_OPTION "-m32")
endif()

if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Linux")
    execute_process(COMMAND gcc -dumpversion COMMAND tr -d '\n' OUTPUT_VARIABLE GCC_VERSION)

    if(${ARCH} STREQUAL "arm")
        set(BUILD_OPTION "-march=armv7-a -mfpu=vfp3 -marm --target=arm-linux-gnueabihf -L/usr/lib/gcc-cross/arm-linux-gnueabihf/${GCC_VERSION} -L/usr/arm-linux-gnueabihf/lib -I/usr/arm-linux-gnueabihf/include -I/usr/arm-linux-gnueabihf/include/c++/${GCC_VERSION} -I/usr/arm-linux-gnueabihf/include/c++/${GCC_VERSION}/arm-linux-gnueabihf")
    endif()

    if(${ARCH} STREQUAL "arm64")
        set(BUILD_OPTION "--target=aarch64-linux-gnu -L/usr/lib/gcc-cross/aarch64-linux-gnu/${GCC_VERSION} -L/usr/aarch64-linux-gnu/lib -I/usr/aarch64-linux-gnu/include -I/usr/aarch64-linux-gnu/include/c++/${GCC_VERSION} -I/usr/aarch64-linux-gnu/include/c++/${GCC_VERSION}/aarch64-linux-gnu")
    endif()

    if(${ARCH} STREQUAL "mips")
        set(BUILD_OPTION "--target=mips-linux-gnu  -L/usr/lib/gcc-cross/mips-linux-gnu/${GCC_VERSION} -L/usr/mips-linux-gnu/lib -I/usr/mips-linux-gnu/include -I/usr/mips-linux-gnu/include/c++/${GCC_VERSION} -I/usr/mips-linux-gnu/include/c++/${GCC_VERSION}/mips-linux-gnu")
    endif()

    if(${ARCH} STREQUAL "mips64")
        set(BUILD_OPTION "--target=mips64-linux-gnuabi64 -L/usr/lib/gcc-cross/mips64-linux-gnuabi64/${GCC_VERSION} -L/usr/mips64-linux-gnuabi64/lib -I/usr/mips64-linux-gnuabi64/include -I/usr/mips64-linux-gnuabi64/include/c++/${GCC_VERSION} -I/usr/mips64-linux-gnuabi64/include/c++/${GCC_VERSION}/mips64-linux-gnuabi64")
    endif()

    if(${ARCH} STREQUAL "ppc")
        set(BUILD_OPTION "--target=powerpc-linux-gnu -L/usr/lib/gcc-cross/powerpc-linux-gnu/${GCC_VERSION} -L/usr/powerpc-linux-gnu/lib -I/usr/powerpc-linux-gnu/include -I/usr/powerpc-linux-gnu/include/c++/${GCC_VERSION} -I/usr/powerpc-linux-gnu/include/c++/${GCC_VERSION}/powerpc-linux-gnu")
    endif()

    if(${ARCH} STREQUAL "ppc64")
        set(BUILD_OPTION "--target=powerpc64-linux-gnu -L/usr/lib/gcc-cross/powerpc64-linux-gnu/${GCC_VERSION} -L/usr/powerpc64-linux-gnu/lib -I/usr/powerpc64-linux-gnu/include -I/usr/powerpc64-linux-gnu/include/c++/${GCC_VERSION} -I/usr/powerpc64-linux-gnu/include/c++/${GCC_VERSION}/powerpc64-linux-gnu")
    endif()
endif()

if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
    # keep same name format with Unix
    set(CMAKE_STATIC_LIBRARY_PREFIX "lib")
    set(CMAKE_STATIC_LIBRARY_PREFIX_C "lib")
    set(CMAKE_STATIC_LIBRARY_PREFIX_CXX "lib")

    if(${ARCH} STREQUAL "amd64")
        set(CLANG_TARGET x86_64-pc-windows-msvc)
    elseif(${ARCH} STREQUAL "i386")
        set(CLANG_TARGET i686-pc-windows-msvc)
    endif()

    SET(flags "${flags} -target ${CLANG_TARGET}")
endif()

if(NOT DEFINED USED_BY_FIBJS)
    set(USED_BY_FIBJS "")
endif()

set(CXX_STD_VER_FLAG "-std=c++14")

if(FIBJS_CMAKE_BUILD_VERBOSE)
    message("[cmake::platform] OS is ${CMAKE_HOST_SYSTEM_NAME}")
    message("[cmake::platform] CMAKE_GENERATOR is ${CMAKE_GENERATOR}")
    message("[cmake::platform] CMAKE_C_COMPILER is ${CMAKE_C_COMPILER}")
    message("[cmake::platform] CMAKE_CXX_COMPILER is ${CMAKE_CXX_COMPILER}")
    message("[cmake::platform] CMAKE_BUILD_TYPE is ${BUILD_TYPE}")
endif()
