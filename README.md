## About fibjs_vender

fibjs_vender 是一个fibjs的依赖库，本身基于 Google v8 JavaScript 引擎

***fibjs入口 (fibjs github):*** https://github.com/xicilion/fibjs

***文档入口 (General docs (Chinese)):*** http://fibjs.org/

***官方交流社区 (Online discussion):*** http://baoz.cn/fibjs

## Update Procedure
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
