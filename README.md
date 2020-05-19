## About fibjs_vender

fibjs_vender 是一个fibjs的依赖库，本身基于 Google v8 JavaScript 引擎

***fibjs入口 (fibjs github):*** https://github.com/fibjs/fibjs

***文档入口 (General docs (Chinese)):*** http://fibjs.org/

## Pre-requisites

编译该项目所需依赖:

| 依赖 | Windows<br/>(使用 VS) | Windows<br/>(使用 Unix 环境) | Linux | Darwin |
|--|--|--|--|--|
| cmake | √ | √ | √ | √ |
| clang | √ | √ | √ | √ |
| visual studio (with C++ Tool) | √ | | ||
| git-bash | √ |  √  | | |

### 在 Windows 上设置 Clang

请确保你的 PATH 中能找到 `curl` 命令:

1. 以管理员身份, 通过 powershell 进入该项目目录
2. 运行 `./.appveyor/install-llvm.cmd`, 根据提示安装 llvm 到对应位置, 确保安装后 LLVM\bin 存在环境变量 `PATH` 中
3. **(如果你不使用 Visual Studio 而是使用 git-bash 编译, 可以忽略这一步)**运行 `./.appveyor/set-llvm.cmd`, 根据提示设置 llvm 相关的 msbuild .props/.targets 到对应位置

## Compilation

### Unix-like

直接运行 `./build` 进行编译.

可以通过提供 `BUILD_JOBS=<N>` 环境变量来启动多核并行编译, 一般取 `BUILD_JOBS=CORE_NUMERS * 4` 为宜, 如对于有 4 核的机器, 可以这样运行:

```bash
BUILD_JOBS=16 ./build
```

[`git-bash`]:https://git-scm.com/downloads

### Windows Msys(Git Bash)

如果你在 Windows 使用了 [`git-bash`], 现在也可以像在 Unix 环境下一样, 直接在 [`git-bash`] 中编译 vender. 但有些额外的要求:

[安装 make]:https://stackoverflow.com/questions/32127524/how-to-install-and-use-make-in-windows

[make.exe]:http://gnuwin32.sourceforge.net/packages/make.htm

#### make.exe

请确保你的 [`git-bash`] 中包含一个 [make.exe] 工具, 它来自于 mingw 工具集. 你需要下载压缩包, 并按照对应的结构解压到你的 `[git-bash目录]/mingw64`. 这里有一些推荐的下载地址:

- http://gnuwin32.sourceforge.net/packages/make.htm
- https://www.benequidem.eu/index.php/download/make/
     
#### MSVC 头文件     

你仍然需要安装完整 VS2017(附带桌面端 C++ 工具), 该项目的 clang 目前仍然要求 使用 `MSV>=1900`.

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

## V8 Update Procedure

### 1）建立并获取v8源码

1.将v8的源码clone至fibjs同级目录source/js/v8/v8下，目录结构如下：

v8的git地址：https://github.com/v8/v8-git-mirror

    |--- fibjs
    |    |--- vender 
    |--- source 
         |--- js 
              |--- v8
                   |--- v8
                        |--- (...v8 source)


### 2）更新v8源码

通过fetch获取v8源码的更新信息，并checkout最新版本以更新fibjs的vender库

$ git fetch github  //github是本地v8设定的remote库

    ./git/config中的源配置
    [remote "github"]
        url = https://github.com/v8/v8-git-mirror.git
        fetch = +refs/heads/*:refs/remotes/github/*

$ git branch -va 查看得到

* remotes/github/4.5.97         4ab3b0d Version 4.5.97

* remotes/github/4.5.98         9cf3374 Version 4.5.98.1 (cherry-pick)

$ git checkout -b v8_4.5.98 github/4.5.98  //例：此处选用最新版github/4.5.98

### 3）更新fibjs的vender源码

进入fibjs的vender目录下执行

$ sh update.sh

### 4）编译并测试更新vender库后的fibjs

各平台的编译及测试方法见：https://github.com/xicilion/fibjs

### 5）提交更新

提交fibjs_vender源码的更新，同时更新fibjs中vender目录的hash