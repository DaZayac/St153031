@echo off
chcp 65001 >nul

g++ *.cpp -o program.exe

program.exe
pause