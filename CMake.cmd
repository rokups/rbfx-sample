@echo off
mkdir build
pushd build
call "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\vcvars64.bat"
cmake -G "Visual Studio 15 2017 Win64" -DURHO3D_ENABLE_ALL=ON -DBUILD_SHARED_LIBS=OFF -DLLVM_VERSION_EXPLICIT=5.0.1 -DLIBCLANG_LIBRARY="C:/Program Files/LLVM/lib/libclang.lib" -DLIBCLANG_INCLUDE_DIR="C:/Program Files/LLVM/include" -DLIBCLANG_SYSTEM_INCLUDE_DIR="C:/"Program Files"/LLVM/lib/clang/5.0.1/include" -DCLANG_BINARY="C:/Program Files/LLVM/bin/clang++.exe" ..
cmake --build . -- /maxcpucount:%NUMBER_OF_PROCESSORS%
popd
@pause
