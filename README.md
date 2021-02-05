## About fibjs_vender

fibjs_vender 是一个fibjs的依赖库，本身基于 Google v8 JavaScript 引擎

***fibjs入口 (fibjs github):*** https://github.com/fibjs/fibjs

***文档入口 (General docs (Chinese)):*** http://fibjs.org/

## Pre-requisites

编译该项目所需依赖:

| 依赖 | Windows | Linux | Darwin |
|--|--|--|--|
| cmake >= 3.10 | √ | √ | √ |
| clang | √ | √ | √ |
| git | √ | √ | √ |
| visual studio 2017 (with C++ Tool) | √ | ||
| git-bash |  √  | | |
| docker | | √ | |

## Windows Setup

在一切准备好之后, 你的系统环境变量 PATH 中能查到这些命令:
- 官方的 cmake: https://cmake.org/download/
- 官方的 git: https://git-scm.com/downloads
- 官方的 clang/clang++: http://releases.llvm.org/9.0.0/ 

我们来一步步设置:

git 官方提供了 `git-bash`, 推荐使用 `git-bash` 作为 fibjs_vender 的命令执行环境.
### Install Git

[git 下载页]:https://git-scm.com/downloads

从 [git 下载页] 安装 Windows 版客户端以安装, 安装时注意:

- 允许其把 git 相关的命令添加到 PATH 中;
- 允许其将 git-bash 添加到你的桌面.

#### make.exe

[安装 make]:https://stackoverflow.com/questions/32127524/how-to-install-and-use-make-in-windows

[make.exe]:http://gnuwin32.sourceforge.net/packages/make.htm

在安装完 git-bash 后, 你还需要为其添加 [`make.exe`], 它来自于 mingw 工具集. 

从这里下载: https://netix.dl.sourceforge.net/project/ezwinports/make-4.3-without-guile-w32-bin.zip, 得到压缩包.

假设你的 git 安装路径为 `C:\Program Files\Git`, 将下载好的 `make-4.3-without-guile-w32-bin.zip`, 放到 `C:\Program Files\Git\mingw64` 中, 并**保持目录结构**解压, 最后你应该有 `C:\Program Files\Git\mingw64\bin\make.exe` 这个文件.

[安装 make]:https://stackoverflow.com/questions/32127524/how-to-install-and-use-make-in-windows
[make.exe 官方指南]:http://gnuwin32.sourceforge.net/packages/make.htm
[`make.exe`]:https://netix.dl.sourceforge.net/project/ezwinports/make-4.3-without-guile-w32-bin.zip

### Install Clang

Windows 上要求 `clang >= 9.0`, 下载地址

- x64: http://releases.llvm.org/9.0.0/LLVM-9.0.0-win64.exe
- x32: http://releases.llvm.org/9.0.0/LLVM-9.0.0-win32.exe

### Visual Studio 2017

下载 VS2017, https://visualstudio.microsoft.com/zh-hans/vs/older-downloads/

安装的时候要选择 C++ 工具.
### Notice

在 Windows 上编译 fibjs_vender 有一些需要注意的地方:

1. 在 Windows 上我们依然使用 clang/LLVM 的原生模式编译而非 clang-cl, *不*推荐使用 VS2017 自带的 clang
2. VS2017 自带的 cmake 与普通 cmake 行为不太一致, 它默认你会使用 clang-cl 模式编译 vc++ 代码, 所以*不要*使用 vS2017 的 cmake
3. clang/LLVM 版本需要 >= 9.0
4. 你需要安装 VS2017(附带桌面端 C++ 工具), 你需要使用它的头文件, 该项目的 clang 目前仍然要求 使用 `MSV>=1900`.

## Linux/Darwin Setup

在 Unix 环境下, 确保 pre-requisites(#Pre-requisites) 中对应的这些工具安装好即可

### macOS

在 macOS 下可以直接编译:

```bash
./build -j8 amd64
./build -j8 i386
```

### Linux

在 Linux 下我们使用 docker 来编译, 如下就是编译 amd64/release 版本的 fibjs_vender:

```bash
DIR=`pwd`;
docker run -t \
     -v ${DIR}:/home/ci fibjs/build-env:clang /bin/sh -c "cd /home/ci; sh build -j2 amd64 release"
```

传入对应的参数, 在 Linux 下就可以直接进行交叉编译:

```bash
sh build -j2 [amd64|i386|arm|arm64|mips|mips64] [debug|release]
```

使用对应的架构参数来向 docker 指定你希望的编译目标架构.

## Compilation

直接运行 `./build` 进行编译.

可以通过提供 `BUILD_JOBS=<N>` 环境变量来启动多核并行编译, 一般取 `BUILD_JOBS=CORE_NUMERS * 4` 为宜, 如对于有 4 核的机器, 可以这样运行:

```bash
BUILD_JOBS=16 ./build
```

[`git-bash`]:https://git-scm.com/downloads

### Windows

直接运行 `./build.cmd` 编译.

Windows 上默认会启动多核并行编译.

### 脚本选项

每个平台上对应的编译脚本都支持一些选项:

|编译选项|含义|适用平台|
|--|--|--|
| amd64 | 编译到 x86_64 架构 | Windows / Linux / Darwin
| i386 | 编译到 x86 架构 | Windows / Linux / Darwin
| release | 编译 release 版本 | Windows / Linux / Darwin
| debug | 编译 debug 版本 | Windows / Linux / Darwin
| clean | 清理已生成的中间产物, 库文件和二进制文件 | Windows / Linux / Darwin