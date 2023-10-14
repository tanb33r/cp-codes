@echo off
setlocal enabledelayedexpansion

REM Check if an argument is provided
if "%1" == "" (
    echo Usage: %0 ^<prefix^>
    exit /b 1
)

REM Prefix provided as an argument
set "prefix=%1"

REM File to copy
set "source_file=temp.cpp"

REM Loop through letters a to e
for %%i in (a b c d e) do (
    REM Destination file name
    set "dest_file=!prefix!%%i.cpp"

    REM Copy content from source file to destination file
    copy "!source_file!" "!dest_file!" > nul

    echo File '!dest_file!' created and content copied.
)

echo Task completed successfully.
