#!/usr/bin/env sh
mkdir -p build
SRC=$(realpath "$(dirname "$0")")
BUILD=$(realpath $SRC/build)
pushd $BUILD
cmake -DURHO3D_ENABLE_ALL=ON -DBUILD_SHARED_LIBS=ON $SRC
cmake --build $BUILD -- -j$(nproc --all)
popd
