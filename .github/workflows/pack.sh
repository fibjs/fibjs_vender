#!/bin/bash

set -ev

echo "RELEASE_TAG is $RELEASE_TAG";
mkdir -p ${RELEASE_TAG};

CUR=`pwd`
cd ./.dist/bin
echo "archiving file: $DIST_FILE"
if [[ "$TARGET_OS" == "Windows" ]]; then
    7z a ${CUR}/${RELEASE_TAG}/${DIST_FILE} ./*
else
    zip -r ${CUR}/${RELEASE_TAG}/${DIST_FILE} ./*
fi
echo "finish archiving!"
cd $CUR

exit 0;
