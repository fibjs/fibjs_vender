#!/bin/bash

# run jssdk_test

set -ev

if [[ $TARGET_OS_NAME == 'Linux' ]]; then
    CUR=`pwd`

    if [[ "$BUILD_TARGET" == "" ]]; then
        docker run -t --rm -v ${CUR}:/fibjs fibjs/linux-build-env:${TARGET_ARCH} /fibjs/.dist/bin/${DIST_DIR}/jssdk_test
    else
        docker run -t --rm -v ${CUR}:/fibjs fibjs/${BUILD_TARGET}-test-env:${TARGET_ARCH} /fibjs/.dist/bin/${DIST_DIR}/jssdk_test
    fi
else # Darwin/Windows
    .dist/bin/$DIST_DIR/jssdk_test
fi

exit 0;
