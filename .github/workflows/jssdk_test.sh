#!/bin/bash

# run jssdk_test

set -ev

if [[ $TARGET_OS_NAME == 'Linux' ]]; then
    if [[ $TARGET_ARCH == "arm" ]]; then
        # run jssdk_test on arm using qemu
        sudo docker run --rm --privileged multiarch/qemu-user-static:register
        DIR=`pwd`;sudo docker run --privileged=true -t -v ${DIR}:/home/ci fibjs/build-env:clang /bin/sh -c "
        cd /home;
        sh init_armhf.sh;
        cp -f ./ci/.dist/bin/$DIST_DIR/jssdk_test ./arm_root_fs/bin/jssdk_test;
        chroot ./arm_root_fs jssdk_test"
    elif [[ $TARGET_ARCH == "arm64" ]]; then
        # run jssdk_test on arm64 using qemu
        sudo docker run --rm --privileged multiarch/qemu-user-static:register
        DIR=`pwd`;sudo docker run --privileged=true -t -v ${DIR}:/home/ci fibjs/build-env:clang /bin/sh -c "
        cd /home;
        sh init_arm64.sh;
        cp -f ./ci/.dist/bin/$DIST_DIR/jssdk_test ./arm64_root_fs/bin/jssdk_test;
        chroot ./arm64_root_fs jssdk_test"
    elif [[ $TARGET_ARCH == "mips" || $TARGET_ARCH == "mips64" ]]; then
        # run jssdk_test on mips/mips64 using qemu
        DIR=`pwd`;
        sudo docker run -t \
            -v ${DIR}:/home/ci fibjs/build-env:clang /bin/sh -c "cd /home/ci; bash ./arch-run ${TARGET_ARCH} ${BUILD_TYPE} -e=jssdk_test;"
    elif [[ $TARGET_ARCH == "i386" ]]; then
        # run jssdk_test on i386 using qemu
        DIR=`pwd`;
        sudo docker run -t \
            -v ${DIR}:/home/ci fibjs/build-env:clang /bin/sh -c "cd /home/ci; bash ./arch-run ${TARGET_ARCH} ${BUILD_TYPE} -e=jssdk_test;"
    else
        .dist/bin/$DIST_DIR/jssdk_test
    fi
else # Darwin/Windows
    .dist/bin/$DIST_DIR/jssdk_test
fi

exit 0;