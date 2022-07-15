#!/bin/sh

cd ..
mkdir -p build-Debug
cd build-Debug
cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Debug ..