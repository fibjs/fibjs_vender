@ECHO OFF
SETLOCAL EnableExtensions EnableDelayedExpansion

SET "EXIT_ON_ERROR=%~1"
SET SUCCESS=0

PUSHD %~dp0

SET VSWHERE=%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe

@rem Visual Studio 2019
FOR /f "delims=" %%A IN ('"%VSWHERE%" -property installationPath -prerelease -version [16.0^,17.0^)') DO (
	SET VCT_PATH=%%A\MSBuild\Microsoft\VC\v160\Platforms
	IF EXIST "!VCT_PATH!" CALL :SUB_v160 "!VCT_PATH!"
	@rem Visual C++ 2017 v141 toolset
	SET VCT_PATH=%%A\MSBuild\Microsoft\VC\v150\Platforms
	IF EXIST "!VCT_PATH!" CALL :SUB_v150 "!VCT_PATH!"
)

IF %SUCCESS% == 0 (
	ECHO Visual C++ 2019 NOT Installed.
	IF "%EXIT_ON_ERROR%" == "" PAUSE
)

POPD
ENDLOCAL
EXIT /B


:SUB_v160
ECHO VCTargetsPath for Visual Studio 2019: %~1
XCOPY /Q /Y "LLVM_FIBJS" "%~1\..\LLVM_FIBJS\"
XCOPY /Q /Y "LLVM_FIBJS_v142" "%~1\x64\PlatformToolsets\LLVM_FIBJS_v142\"
XCOPY /Q /Y "LLVM_FIBJS_v142" "%~1\Win32\PlatformToolsets\LLVM_FIBJS_v142\"
XCOPY /Q /Y "LLVM_FIBJS_v142" "%~1\ARM64\PlatformToolsets\LLVM_FIBJS_v142\"
XCOPY /Q /Y "LLVM_FIBJS_v142" "%~1\ARM\PlatformToolsets\LLVM_FIBJS_v142\"
SET SUCCESS=1
EXIT /B


:SUB_v150
ECHO VCTargetsPath for Visual Studio 2019: %~1
XCOPY /Q /Y "LLVM_FIBJS" "%~1\..\LLVM_FIBJS\"
XCOPY /Q /Y "LLVM_FIBJS_v141" "%~1\x64\PlatformToolsets\LLVM_FIBJS_v141\"
XCOPY /Q /Y "LLVM_FIBJS_v141" "%~1\Win32\PlatformToolsets\LLVM_FIBJS_v141\"
XCOPY /Q /Y "LLVM_FIBJS_v141" "%~1\ARM64\PlatformToolsets\LLVM_FIBJS_v141\"
XCOPY /Q /Y "LLVM_FIBJS_v141" "%~1\ARM\PlatformToolsets\LLVM_FIBJS_v141\"
SET SUCCESS=1
EXIT /B
