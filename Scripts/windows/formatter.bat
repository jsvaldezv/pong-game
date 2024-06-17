@echo off
title Build VS22 Project

::    _                _     _                 
::   (_)              | |   | |                
::    _ _____   ____ _| | __| | ___ ______   __
::   | / __\ \ / / _` | |/ _` |/ _ \_  /\ \ / /
::   | \__ \\ V / (_| | | (_| |  __// /  \ V / 
::   | |___/ \_/ \__,_|_|\__,_|\___/___|  \_/  
::  _/ |                                       
:: |__/ 

echo ==========================================
echo                 Starting...
echo ==========================================

:: ============================================================================

set "directory=Source"

for /R "%directory%" %%f in (*) do 
(
    echo Processing file: %%f
    clang-format --style=file -i %%f
)

endlocal
