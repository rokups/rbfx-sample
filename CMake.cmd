@echo off
mkdir cmake-build
pushd cmake-build
call "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\vcvars64.bat"
cmake -G "Visual Studio 15 2017 Win64" -DBUILD_SHARED_LIBS=ON ..
cmake --build . -- /maxcpucount:%NUMBER_OF_PROCESSORS%
popd
@pause
