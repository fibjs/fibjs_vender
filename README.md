## About fibjs_vender

fibjs_vender 是一个fibjs的依赖库，本身基于 Google v8 JavaScript 引擎

***fibjs入口 (fibjs github):*** https://github.com/fibjs/fibjs

***文档入口 (General docs (Chinese)):*** http://fibjs.org/

## Pre-requisites

编译该项目需依赖:

| 依赖 | Windows | Linux | Darwin |
|--|--|--|--|
| cmake >= 3.10 | √ | √ | √ |
| clang | Optional | √ | √ |
| git | Optional | Optional | Optional |
| visual studio 2017 (with C++ Tool) | √ | ||
| docker | | √ | |

## Windows

下载并安装这些工具:

- Visual Studio 2017
- 官方的 cmake: https://cmake.org/download/
<!-- - 官方的 git: https://git-scm.com/downloads -->

如果你希望使用 clang 编译, 你还需要安装:
- 官方的 clang/clang++: http://releases.llvm.org/9.0.0/ 
- make.exe: https://netix.dl.sourceforge.net/project/ezwinports/make-4.3-without-guile-w32-bin.zip


安装好后, 确保你的环境变量 PATH 中能查到这些命令:

- cmake
- clang/clang++(使用 LLVM 编译时)
- make(使用 LLVM 编译时)

如果你无法在 cmd 中执行这些命令, 说明安装有误, 请检查你是否安装了这些软件并将它们添加到环境变量 PATH.

我们来一步步设置:

### Visual Studio 2017

下载 VS2017 并安装, https://visualstudio.microsoft.com/zh-hans/vs/older-downloads/.

安装时需选择:
- C++ 工具
- Windows Kits 10

<!-- ### Install Git

[git 下载页]:https://git-scm.com/downloads

从 [git 下载页] 安装 Windows 版客户端以安装, 安装时注意:

- 允许其把 git 相关的命令添加到 PATH 中;
- 允许其将 git-bash 添加到你的桌面. -->

<!-- git 官方提供了 `git-bash`, 推荐使用 `git-bash` 作为 fibjs_vender 的命令执行环境. -->

<!-- 在安装完 git-bash 后, 你还需要为其添加 [`make.exe`], 它来自于 mingw 工具集. 

从这里下载: https://netix.dl.sourceforge.net/project/ezwinports/make-4.3-without-guile-w32-bin.zip, 得到压缩包.

假设你的 git 安装路径为 `C:\Program Files\Git`, 将下载好的 `make-4.3-without-guile-w32-bin.zip`, 放到 `C:\Program Files\Git\mingw64` 中, 并**保持目录结构**解压, 最后你应该有 `C:\Program Files\Git\mingw64\bin\make.exe` 这个文件. -->

<!-- [`git-bash`]:https://git-scm.com/downloads -->

### Install Clang

Windows 上要求 `clang >= 9.0`, 下载地址

- x64: http://releases.llvm.org/9.0.0/LLVM-9.0.0-win64.exe
- x32: http://releases.llvm.org/9.0.0/LLVM-9.0.0-win32.exe

安装时选择将 LLVM 工具添加到你的**用户环境变量 PATH** 或**系统环境变量 PATH**, 你也可以在安装完之后手动将其 bin 目录路径添加到环境变量 PATH.

#### Install make.exe

[安装 make]:https://stackoverflow.com/questions/32127524/how-to-install-and-use-make-in-windows

[make.exe]:http://gnuwin32.sourceforge.net/packages/make.htm

[make.exe 官方指南]:http://gnuwin32.sourceforge.net/packages/make.htm

[`make.exe`]:https://netix.dl.sourceforge.net/project/ezwinports/make-4.3-without-guile-w32-bin.zip

直接从 [`make.exe`] 下载, 解压后, 将其 `bin/make.exe` 添加到任何一个你的环境变量 PATH 包含的路径中, 比如 `C:\Windows\System32`.

### Compile On Windows

在 Windows 上默认会对单个项目开启多核并行编译.

#### 使用 MSVC 编译

1. 打开 Developer Command Prompt VS 2017, 切换到当前项目的根路径
2. 运行 `.\build.cmd`

**注意** 如果你使用 msvc 编译, 则必须在 Developer Command Prompt VS 2017 中执行, 且**不能**添加 `--use-clang` 参数

#### 使用 clang 编译

1. 打开一个**简单的** Powershell/Cmd (推荐使用 Powershell 或在 Windows Terminal 里打开 Cmd, 它对 LLVM 的输出格式有更好的色彩支持), 切换到当前项目的根路径
2. 直接运行 `.\build.cmd --use-clang` 编译.

**注意** **不能**在 Developer Command Prompt VS 2017 使用 `--use-clang` 参数.

除此外, 在 Windows 上使用 clang 编译 fibjs_vender 时需要注意:

1. *不能*使用 VS2017 自带的 clang, 因为它默认会使用 clang-cl 模式编译; 同理, 也不要使用从 VS2017 安装的 cmake.
2. clang/LLVM 版本需要 >= 9.0
3. 你需要安装 VS2017(附带桌面端 C++ 工具), 你需要使用它的头文件, 该项目的 clang 目前仍然要求 使用 `MSV>=1900`.

## Linux / Darwin

在 Unix 环境下, 确保 [pre-requisites](#Pre-requisites) 中对应的这些工具安装好即可.

### macOS

macOS 自带 apple-clang, 你只需安装 cmake 即可

```bash
brew install cmake
```

在 macOS 下可以直接编译:

```bash
./build -j8 amd64
./build -j8 i386
```

### Linux

在 Linux 下, 我们使用 docker 来编译, 如下就是编译 amd64/release 版本的 fibjs_vender:

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

## 脚本选项

每个平台上对应的编译脚本都支持一些选项:

|编译选项|含义|适用平台|
|--|--|--|
| amd64 | 编译到 x86_64 架构 | Windows / Linux / Darwin
| i386 | 编译到 x86 架构 | Windows / Linux / Darwin
| release | 编译 release 版本 | Windows / Linux / Darwin
| debug | 编译 debug 版本 | Windows / Linux / Darwin
| clean | 清理已生成的中间产物, 库文件和二进制文件 | Windows / Linux / Darwin