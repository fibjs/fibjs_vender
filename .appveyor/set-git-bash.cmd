REM 2.26.2 -- https://github.com/git-for-windows/git/releases/download/v2.26.2.windows.1/Git-2.26.2-64-bit.exe

REM appveyor has installed git-bash, so we don't need re-install it by own.
REM We put code below here just for your reference when you set development in your host.

    REM if /I "%PLATFORM%" == "" (
    REM     if /I "%PROCESSOR_ARCHITECTURE%" == "AMD64" (
    REM         @set PLATFORM=x64
    REM     ) else (
    REM         @set PLATFORM=x86
    REM     )
    REM )

    REM if NOT EXIST git-bash-installer.exe (
    REM     IF /I "%PLATFORM%" == "x64" (
    REM         curl -Ls -o "git-bash-installer.exe" "https://github.com/git-for-windows/git/releases/download/v2.26.2.windows.1/Git-2.26.2-64-bit.exe"
    REM         ECHO "install git-bash for x64"
    REM     )
    REM     IF /I "%PLATFORM%" == "x86" (
    REM         curl -Ls -o "git-bash-installer.exe" "https://github.com/git-for-windows/git/releases/download/v2.26.2.windows.1/Git-2.26.2-32-bit.exe"
    REM         ECHO "install git-bash for x86"
    REM     )
    REM )

    REM START /WAIT git-bash-installer.exe /SILENT /DIR=C:\"Program Files\Git" /NORESTART /NOCANCEL
    REM @set PATH="C:\Program Files\Git\bin";%PATH%

REM install make.exe to Git's mingw64/bin
"C:\Program Files\Git\bin\sh.exe" .\.appveyor\install-make.sh