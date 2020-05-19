#!/bin/bash

get_build_env()
{
    HOST_OS=`uname`
    HOST_ARCH=`uname -m`

    case ${HOST_ARCH} in
        i386|i686) HOST_ARCH="i386"
            ;;
        x86_64|amd64) HOST_ARCH="amd64"
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

    case ${HOST_OS} in
        MINGW*) HOST_OS="Windows"
            HOST_MINGW="true";
            ;;
        CYGWIN*) HOST_OS="Windows"
            HOST_CYGWIN="true";
            ;;
        Linux)
            GCC_VERSION=`gcc -dumpversion`
            ;;
    esac

    TARGET_OS=$HOST_OS
    if [ -z "${TARGET_ARCH}" ]; then
        TARGET_ARCH=$HOST_ARCH
    fi
    if [ -z "${BUILD_TYPE}" ]; then
        BUILD_TYPE="release"
    fi
    BUILD_OPTION=""

    if [ -z "${GCC_VERSION}" ] ; then
        GCC_VERSION=""
    fi
}

get_windows_vctool_install_path()
{
    if [ -z "${VCToolsInstallDir}" ]; then
        VS_INSTALLPATH=$("$ProgramW6432 (x86)\Microsoft Visual Studio\Installer\vswhere.exe" -property installationPath -version "[15.0, 16.0)")
        CUR_MSVC_1900_VER=$(cat "$VS_INSTALLPATH\VC\Auxiliary\Build\Microsoft.VCToolsVersion.default.txt")

        # @todo set EnvVar to tell clang use VS2017 rather than newest one if it's not VS2017
        #
        # by default, clang/LLVM would find newest VCToolChain, if you install both VS2017 and VS2019
        # VS2019's VCTools would be used to compile vender, but v8 6.9 cannot be compiled with it, we must
        # tell clang to use VS2017's VCToolChain
        VCToolsInstallDir="$VS_INSTALLPATH\VC\Tools\MSVC\\$CUR_MSVC_1900_VER"
    fi
}