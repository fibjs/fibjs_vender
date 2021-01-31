#!/bin/bash

usage()
{
	echo ""
	echo "Usage: `basename $0` [options] [-jn] [-v] [-h]"
	echo "Options:"
	echo "  release, debug: "
	echo "      Specifies the build type."
	echo "  i386, amd64, arm, arm64, mips, mips64, ppc, ppc64:"
	echo "      Specifies the architecture for code generation."
	echo "  clean: "
	echo "      Clean the build folder."
	echo "  ci: "
	echo "      Specifies the environment is CI."
	echo "  -h, --help:"
	echo "      Print this message and exit."
	echo "  -j: enable make '-j' option."
	echo "      if 'n' is not given, will set jobs to auto detected core count, otherwise n is used."
	echo "  -v: verbose make"
	echo ""
	exit 0
}

get_build_env()
{
    HOST_OS=`uname`
    case ${HOST_OS} in
        MINGW*) HOST_OS="Windows"
            HOST_MINGW="true";
            ;;
        CYGWIN*) HOST_OS="Windows"
            HOST_CYGWIN="true";
            ;;
    esac

    HOST_ARCH=`uname -m`
    if [ ! "$PROCESSOR_ARCHITEW6432" = "" ]; then
        HOST_ARCH="${PROCESSOR_ARCHITEW6432}"
    fi

    case ${HOST_ARCH} in
        i386|i686|x86) HOST_ARCH="i386"
            ;;
        x86_64|amd64|AMD64) HOST_ARCH="amd64"
            ;;
        armv6|armv7|armv7s|armv7l) HOST_ARCH="arm"
            ;;
        aarch64) HOST_ARCH="arm64"
            ;;
        mips|mipsel) HOST_ARCH="mips"
            ;;
        mips64) HOST_ARCH="mips64"
            ;;
        powerpc) HOST_ARCH="ppc"
            ;;
        ppc64) HOST_ARCH="ppc64"
            ;;
    esac

    TARGET_OS=$HOST_OS
    if [ -z "${TARGET_ARCH}" ]; then
        TARGET_ARCH=$HOST_ARCH
    fi
    if [ -z "${BUILD_TYPE}" ]; then
        BUILD_TYPE="release"
    fi

    for i in "$@"
    do
        case $i in
            i386|amd64|arm|arm64|mips|mips64|ppc|ppc64) TARGET_ARCH=$i
                ;;
            release|debug|clean) BUILD_TYPE=$i
                ;;
            ci) CI="ci"
                ;;
            -j*) ENABLE_JOBS=1; BUILD_JOBS="${i#-j}"
                ;;
            -v) BUILD_VERBOSE='VERBOSE=1' 
                ;;
            --help|-h) usage
                ;;
            *) echo "illegal option $i"
                usage
                ;;
        esac
    done

    if [ "$ENABLE_JOBS" = "1" -a "$BUILD_JOBS" = "" ]; then
        #get cpu core count 
        CPU_CORE=1
        case ${HOST_OS} in
            Darwin)
                CPU_CORE=$(sysctl hw.ncpu | awk '{print $2}')
                ;;
            Linux)
                CPU_CORE=$(cat /proc/cpuinfo | grep processor | wc -l)
                ;;
            Windows)
                CPU_CORE=$(echo $NUMBER_OF_PROCESSORS)
                ;;
        esac
        echo "host machine has ${CPU_CORE} core"

        if [ "$CPU_CORE" = "1" ]; then
            BUILD_JOBS="2"
        else
            # set build jobs with cpu core count
            BUILD_JOBS=${CPU_CORE}
        fi
    fi
}
