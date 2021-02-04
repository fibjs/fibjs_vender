if("${HOST_ARCH}" STREQUAL "amd64" AND "${ARCH}" STREQUAL "i386")
    set(BUILD_OPTION "-m32")
endif()

if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Linux")
    message("[Linux] HOST_ARCH is ${HOST_ARCH}, TARGET_ARCH is ${ARCH}")

    execute_process(
        COMMAND gcc -dumpversion
        OUTPUT_VARIABLE GCC_VERSION
        OUTPUT_STRIP_TRAILING_WHITESPACE
    )
    message("[Linux] GCC_VERSION is ${GCC_VERSION}")

    if(NOT "${HOST_ARCH}" STREQUAL "${ARCH}")
        message("[Linux] HOST_ARCH:${HOST_ARCH} is different with TARGET_ARCH:${ARCH}, setup build flags:")

        if(${ARCH} STREQUAL "arm")
            set(BUILD_OPTION "${BUILD_OPTION} -march=armv7-a -mfpu=vfp3 -marm --target=arm-linux-gnueabihf -L/usr/lib/gcc-cross/arm-linux-gnueabihf/${GCC_VERSION} -L/usr/arm-linux-gnueabihf/lib -I/usr/arm-linux-gnueabihf/include -I/usr/arm-linux-gnueabihf/include/c++/${GCC_VERSION} -I/usr/arm-linux-gnueabihf/include/c++/${GCC_VERSION}/arm-linux-gnueabihf")
        elseif(${ARCH} STREQUAL "arm64")
            set(BUILD_OPTION "${BUILD_OPTION} --target=aarch64-linux-gnu -L/usr/lib/gcc-cross/aarch64-linux-gnu/${GCC_VERSION} -L/usr/aarch64-linux-gnu/lib -I/usr/aarch64-linux-gnu/include -I/usr/aarch64-linux-gnu/include/c++/${GCC_VERSION} -I/usr/aarch64-linux-gnu/include/c++/${GCC_VERSION}/aarch64-linux-gnu")
        elseif(${ARCH} STREQUAL "mips")
            set(BUILD_OPTION "${BUILD_OPTION} --target=mips-linux-gnu  -L/usr/lib/gcc-cross/mips-linux-gnu/${GCC_VERSION} -L/usr/mips-linux-gnu/lib -I/usr/mips-linux-gnu/include -I/usr/mips-linux-gnu/include/c++/${GCC_VERSION} -I/usr/mips-linux-gnu/include/c++/${GCC_VERSION}/mips-linux-gnu")
        elseif(${ARCH} STREQUAL "mips64")
            set(BUILD_OPTION "${BUILD_OPTION} --target=mips64-linux-gnuabi64 -L/usr/lib/gcc-cross/mips64-linux-gnuabi64/${GCC_VERSION} -L/usr/mips64-linux-gnuabi64/lib -I/usr/mips64-linux-gnuabi64/include -I/usr/mips64-linux-gnuabi64/include/c++/${GCC_VERSION} -I/usr/mips64-linux-gnuabi64/include/c++/${GCC_VERSION}/mips64-linux-gnuabi64")
        elseif(${ARCH} STREQUAL "ppc")
            set(BUILD_OPTION "${BUILD_OPTION} --target=powerpc-linux-gnu -L/usr/lib/gcc-cross/powerpc-linux-gnu/${GCC_VERSION} -L/usr/powerpc-linux-gnu/lib -I/usr/powerpc-linux-gnu/include -I/usr/powerpc-linux-gnu/include/c++/${GCC_VERSION} -I/usr/powerpc-linux-gnu/include/c++/${GCC_VERSION}/powerpc-linux-gnu")
        elseif(${ARCH} STREQUAL "ppc64")
            set(BUILD_OPTION "${BUILD_OPTION} --target=powerpc64-linux-gnu -L/usr/lib/gcc-cross/powerpc64-linux-gnu/${GCC_VERSION} -L/usr/powerpc64-linux-gnu/lib -I/usr/powerpc64-linux-gnu/include -I/usr/powerpc64-linux-gnu/include/c++/${GCC_VERSION} -I/usr/powerpc64-linux-gnu/include/c++/${GCC_VERSION}/powerpc64-linux-gnu")
        endif()

        message("[Linux] BUILD_OPTION is ${BUILD_OPTION}")
    endif()
elseif(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
    # keep same name format with Unix
    set(CMAKE_STATIC_LIBRARY_PREFIX "lib")
    set(CMAKE_STATIC_LIBRARY_PREFIX_C "lib")
    set(CMAKE_STATIC_LIBRARY_PREFIX_CXX "lib")

    set(CXX_STD_VER_FLAG "-std=c++14")

    if(${ARCH} STREQUAL "amd64")
        set(BUILD_OPTION "${BUILD_OPTION} -target x86_64-pc-windows-msvc")
    elseif(${ARCH} STREQUAL "i386")
        set(BUILD_OPTION "${BUILD_OPTION} -target i686-pc-windows-msvc")
    endif()
endif()

if(NOT DEFINED CXX_STD_VER_FLAG)
    set(CXX_STD_VER_FLAG "-std=c++11")
endif()

find_program(CCACHE_FOUND ccache)
if(CCACHE_FOUND)
	set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE ccache)
	set_property(GLOBAL PROPERTY RULE_LAUNCH_LINK ccache)
endif(CCACHE_FOUND)