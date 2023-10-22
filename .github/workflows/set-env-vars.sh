TARGET_OS=`uname`
case ${TARGET_OS} in
      MINGW*) TARGET_OS="Windows"
          HOST_MINGW="true";
          ;;
      CYGWIN*) TARGET_OS="Windows"
          HOST_CYGWIN="true";
          ;;
esac

echo "TARGET_OS=$TARGET_OS" >> $GITHUB_OUTPUT

echo "BUILD_USE_CLANG=$BUILD_USE_CLANG" >> $GITHUB_OUTPUT

export GIT_BRANCH=${GITHUB_REF#refs/heads/}
echo "GIT_BRANCH=$GIT_BRANCH" >> $GITHUB_OUTPUT
export GIT_COMMIT_HEAD_MSG=$(git log --format=%b -1)
echo "GIT_COMMIT_HEAD_MSG=$GIT_COMMIT_HEAD_MSG" >> $GITHUB_OUTPUT
export GIT_COMMIT_SHORTCUTS=$(git log --format=%h -1)
echo "GIT_COMMIT_SHORTCUTS=$GIT_COMMIT_SHORTCUTS" >> $GITHUB_OUTPUT
export GIT_COMMIT_TIME=$(git show -s --format="%cd" --date=format:%Y%m%d%H%M%S HEAD)
echo "GIT_COMMIT_TIME=$GIT_COMMIT_TIME" >> $GITHUB_OUTPUT

if [ "$GITHUB_REPOSITORY" == "fibjs/fibjs_vender" ]; then
    export IS_MAIN_REPO=1
fi
if [[ -z "$IS_MAIN_REPO" || "$GIT_BRANCH" == "dev" ]]; then
    echo "IS_UPLOAD_ASSETS=1" >> $GITHUB_OUTPUT
fi

export RELEASE_TAG="$GIT_COMMIT_TIME-$GIT_COMMIT_SHORTCUTS";
if [ -z "$IS_MAIN_REPO" ]; then
    SUFFIX=${GIT_BRANCH//\//'-'}
    RELEASE_TAG="$RELEASE_TAG-$SUFFIX"
fi
echo "RELEASE_TAG=$RELEASE_TAG" >> $GITHUB_OUTPUT

git fetch;
if [ $(git tag --list | egrep "^$RELEASE_TAG$") ]; then
    echo "tag $RELEASE_TAG existed";
    export TAG_EXISTED="YES"
else
    export TAG_EXISTED=""
fi
echo "TAG_EXISTED=$TAG_EXISTED" >> $GITHUB_OUTPUT

DIST_ARCH=$TARGET_ARCH
SNAPSHOT_ARCH=$TARGET_ARCH

if [[ "$RUNNER_OS" == "Linux" ]]; then
    export TARGET_OS_NAME="Linux";

    if [[ "$BUILD_TARGET" != "" ]]; then
        export DIST_FILE="vender-${BUILD_TARGET}-${DIST_ARCH}-$BUILD_TYPE.zip"

        if [[ "$BUILD_TARGET" == "android" ]]; then
            export DIST_DIR="Android_${TARGET_ARCH}_$BUILD_TYPE"
        elif [[ "$BUILD_TARGET" == "alpine" ]]; then
            export DIST_DIR="Alpine_${TARGET_ARCH}_$BUILD_TYPE"
        else
            export DIST_DIR="Linux_${TARGET_ARCH}_$BUILD_TYPE"
        fi
    else
        export DIST_FILE="vender-linux-${DIST_ARCH}-$BUILD_TYPE.zip"
        export DIST_DIR="Linux_${TARGET_ARCH}_$BUILD_TYPE"
    fi
fi

if [[ "$RUNNER_OS" == "macOS" ]]; then
    export TARGET_OS_NAME="Darwin";

    if [[ "$BUILD_TARGET" == "iphone" ]]; then
        export DIST_FILE="vender-${BUILD_TARGET}-${DIST_ARCH}-$BUILD_TYPE.zip"
        export DIST_DIR="iPhone_${TARGET_ARCH}_$BUILD_TYPE"
    else
        export DIST_FILE="vender-darwin-${DIST_ARCH}-$BUILD_TYPE.zip"
        export DIST_DIR="Darwin_${TARGET_ARCH}_$BUILD_TYPE"
    fi
fi

if [[ "$RUNNER_OS" == "Windows" ]]; then
    export TARGET_OS_NAME="Windows";
    export DIST_FILE="vender-windows-${DIST_ARCH}-$BUILD_TYPE.zip"
    export DIST_DIR="Windows_${TARGET_ARCH}_$BUILD_TYPE"
fi

echo "TARGET_OS_NAME=$TARGET_OS_NAME" >> $GITHUB_OUTPUT
echo "DIST_FILE=$DIST_FILE" >> $GITHUB_OUTPUT
echo "DIST_DIR=$DIST_DIR" >> $GITHUB_OUTPUT

export DIST_FILEPATH=$RELEASE_TAG/$DIST_FILE
echo "DIST_FILEPATH=$DIST_FILEPATH" >> $GITHUB_OUTPUT
