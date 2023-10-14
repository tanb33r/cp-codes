@echo off
setlocal enabledelayedexpansion

REM Check if two arguments are provided
if "%1" == "" (
    echo Usage: %0 ^<prefix^> ^<num_files^>
    exit /b 1
)

REM Prefix and number of files provided as arguments
set "prefix=%1"
set /a "num_files=%2"

REM Validate num_files argument
if !num_files! lss 1 (
    echo Error: Number of files should be 1 or greater.
    exit /b 1
)

REM File to copy
set "source_file=temp.cpp"

REM Array of letters
set "letters=abcdefghijklmnopqrstuvwxyz"

REM Loop through the specified number of files
for /l %%i in (0, 1, %num_files%) do (
    REM Extract a letter from the array
    set "letter=!letters:~%%i,1!"

    REM Destination file name
    set "dest_file=!prefix!!letter!.cpp"

    REM Copy content from source file to destination file
    copy "!source_file!" "!dest_file!" > nul

    echo File '!dest_file!' created and content copied.
)

echo Task completed successfully.
