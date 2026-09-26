@echo off
cd /d "%~dp0"

REM The vender checkout lives at <WORK_ROOT>\vender: out\ and bin\ belong to the
REM parent directory (same rule as build_tools/scripts/build_env.sh).
for %%I in ("%~dp0..") do set WORK_ROOT=%%~fI

./build_tools/scripts/build %*%