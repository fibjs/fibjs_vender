#!/bin/bash

# run jssdk_test

set -ev

if [[ $TARGET_OS_NAME == 'Linux' ]]; then
    bash ./arch-run ${TARGET_ARCH} ${BUILD_TYPE} -e=jssdk_test
else # Darwin/Windows
    .dist/bin/$DIST_DIR/jssdk_test
fi

exit 0;