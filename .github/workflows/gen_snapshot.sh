#!/bin/bash

# generate snapshot-<arch>-<os>.cc in repo's root

set -ev

if [[ $TARGET_OS_NAME == 'Linux' ]]; then
    bash ./arch-run ${TARGET_ARCH} ${BUILD_TYPE} -e=v8_test
else # Darwin/Windows
    .dist/bin/$DIST_DIR/v8_test
fi

exit 0;