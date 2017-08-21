rem echo off

set pwd=%cd%

set PATH=.;%pwd%\MINGW\bin;%pwd%\MinGW\msys\1.0\bin;%PATH%

doskey ls=dir

cd .

rem cmd /K "start %pwd%CSIS-3000\Notepad++Portable\Notepad++Portable.exe && start %pwd%CSIS-3000\cmd.exe %% exit"

cmd /K "start %pwd%\Notepad++Portable\Notepad++Portable.exe && start %pwd%\MinGW\msys\1.0\msys.bat"
