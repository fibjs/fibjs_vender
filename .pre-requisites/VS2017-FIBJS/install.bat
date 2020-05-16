@ECHO OFF
SETLOCAL EnableExtensions EnableDelayedExpansion

SET "EXIT_ON_ERROR=%~1"
SET SUCCESS=0

PUSHD %~dp0

SET VSWHERE=%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe
@rem Visual Studio 2017
FOR /f "delims=" %%A IN ('"%VSWHERE%" -property installationPath -prerelease -version [15.0^,16.0^)') DO (
	SET VCT_PATH=%%A\Common7\IDE\VC\VCTargets\Platforms
	IF EXIST "!VCT_PATH!" CALL :SUB_VS2017 "!VCT_PATH!" 2017
)

IF %SUCCESS% == 0 (
	ECHO Visual C++ 2017 NOT Installed.
	IF "%EXIT_ON_ERROR%" == "" PAUSE
)

POPD
ENDLOCAL
EXIT /B


:SUB_VS2017
ECHO VCTargetsPath for Visual Studio %~2: %~1
XCOPY /Q /Y "LLVM_FIBJS" "%~1\..\LLVM_FIBJS\"
XCOPY /Q /Y "LLVM_FIBJS_v141" "%~1\x64\PlatformToolsets\LLVM_FIBJS_v141\"
XCOPY /Q /Y "LLVM_FIBJS_v141" "%~1\Win32\PlatformToolsets\LLVM_FIBJS_v141\"
XCOPY /Q /Y "LLVM_FIBJS_v141" "%~1\ARM64\PlatformToolsets\LLVM_FIBJS_v141\"
XCOPY /Q /Y "LLVM_FIBJS_v141" "%~1\ARM\PlatformToolsets\LLVM_FIBJS_v141\"
SET SUCCESS=1
EXIT /B
