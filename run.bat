@echo off
setlocal ENABLEEXTENSIONS
cd /d %~dp0

if not exist build mkdir build
cd build

rem Auto-detect qmake/qmake6 (requires a Qt-enabled cmd where these are on PATH)
set QMAKE_BIN=
where qmake >nul 2>&1 && set QMAKE_BIN=qmake
if not defined QMAKE_BIN (
  where qmake6 >nul 2>&1 && set QMAKE_BIN=qmake6
)
if not defined QMAKE_BIN (
  echo qmake/qmake6 not found in PATH. Open a Qt command prompt or set QMAKE_BIN.>&2
  exit /b 127
)

%QMAKE_BIN% ..\Zorkers.pro

rem Try MSVC first, then MinGW
where nmake >nul 2>&1 && ( nmake ) || ( mingw32-make )

if exist Zorkers.exe (
  Zorkers.exe
) else if exist debug\Zorkers.exe (
  debug\Zorkers.exe
) else if exist release\Zorkers.exe (
  release\Zorkers.exe
) else (
  echo Executable not found. Check build output.
  exit /b 1
)