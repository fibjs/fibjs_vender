if("${HOST_ARCH}" STREQUAL "amd64" AND "${ARCH}" STREQUAL "i386")
    set(BUILD_OPTION "-m32")
elseif("${HOST_ARCH}" STREQUAL "i386" AND "${ARCH}" STREQUAL "amd64")
    set(BUILD_OPTION "-m64")
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
    if(${ARCH} STREQUAL "amd64")
        set(BUILD_OPTION "${BUILD_OPTION} --target=x86_64-pc-windows-msvc")
    else()
        set(BUILD_OPTION "${BUILD_OPTION} --target=i686-pc-windows-msvc")
    endif()

    # keep same name format with Unix
    set(CMAKE_STATIC_LIBRARY_PREFIX "lib")

    set(CLANG_COMPILE_FLAGS_CXX_STD_VER "-std=c++14")

	add_definitions(-DWIN32 -D_LIB -D_CRT_SECURE_NO_WARNINGS -D_CRT_RAND_S -DNOMINMAX)
	set(flags "${flags} -fms-extensions -fmsc-version=1910 -frtti")
        
    # @warning: for cmake/clang on windows, you should always make CMAKE_BUILD_TYPE available, never leave it. Otherwise you would get one library for 'DEBUG'
	if(${BUILD_TYPE} STREQUAL "debug")
        set(CMAKE_BUILD_TYPE Debug)
	elseif(${BUILD_TYPE} STREQUAL "release")
        set(CMAKE_BUILD_TYPE Release)
	endif()

    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

	set(link_flags "${link_flags} -Xlinker //OPT:ICF -Xlinker //ERRORREPORT:PROMPT -Xlinker //NOLOGO -Xlinker //TLBID:1")
elseif(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Darwin")
	set(flags "${flags} -Wno-nullability-completeness -mmacosx-version-min=10.9 -DOBJC_OLD_DISPATCH_PROTOTYPES=1")
	set(link_flags "${link_flags} -framework WebKit -framework Cocoa -framework Carbon -framework IOKit -mmacosx-version-min=10.9")
	
    if(src_platform_list)
	    set_source_files_properties(${src_platform_list} PROPERTIES COMPILE_FLAGS "-x objective-c++")
    endif()
endif()

if(NOT DEFINED CLANG_COMPILE_FLAGS_CXX_STD_VER)
    set(CLANG_COMPILE_FLAGS_CXX_STD_VER "-std=c++11")
endif()

set(flags "${flags} -fsigned-char -fmessage-length=0 -fdata-sections -ffunction-sections -D_FILE_OFFSET_BITS=64")
set(ccflags "${ccflags} ${CLANG_COMPILE_FLAGS_CXX_STD_VER}")

if(${BUILD_TYPE} STREQUAL "release")
	set(flags "${flags} -O3 -s ${BUILD_OPTION} -w -fomit-frame-pointer -fvisibility=hidden")

	if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "FreeBSD")
		set(flags "${flags} -fno-omit-frame-pointer")
	else()
		set(flags "${flags} -fomit-frame-pointer")
	endif()

	set(link_flags "${link_flags} ${BUILD_OPTION} -static-libstdc++")
	add_definitions(-DNDEBUG=1)

	if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Linux")
		set(link_flags "${link_flags} ${link_flags} -static-libgcc")
	endif()
elseif(${BUILD_TYPE} STREQUAL "debug")
	set(flags "${flags} -g -O0 ${BUILD_OPTION} -Wall -Wno-overloaded-virtual")
	set(link_flags "${link_flags} ${BUILD_OPTION}")
	add_definitions(-DDEBUG=1)

	if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
		add_definitions(-D_DEBUG)
	endif()
endif()