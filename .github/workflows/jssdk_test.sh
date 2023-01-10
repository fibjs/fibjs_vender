#!/bin/bash

# run jssdk_test

set -ev

if [[ $TARGET_OS_NAME == 'Linux' ]]; then
    if [[ "$BUILD_TARGET" == "" ]]; then
        BUILD_TARGE="linux"
    fi

    CUR=`pwd`
    docker run --rm -v ${CUR}:/fibjs fibjs/${BUILD_TARGET}-test-env:${TARGET_ARCH} /fibjs/.dist/bin/${DIST_DIR}/jssdk_test
else # Darwin/Windows
    .dist/bin/$DIST_DIR/jssdk_test
fi

exit 0;