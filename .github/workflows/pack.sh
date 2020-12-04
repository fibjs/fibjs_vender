#!/bin/bash

set -ev

echo "RELEASE_TAG is $RELEASE_TAG";
mkdir -p ${RELEASE_TAG};

CUR=`pwd`
cd ./.dist/bin
echo "archiving file: $DIST_FILE"
zip -r ${CUR}/${RELEASE_TAG}/${DIST_FILE} ./*
echo "finish archiving!"
cd $CUR

exit 0;
