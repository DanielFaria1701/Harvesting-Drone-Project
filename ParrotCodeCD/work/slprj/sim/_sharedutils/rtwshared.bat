@echo off
set MATLAB=D:\Daniel2
"%MATLAB%\bin\win64\gmake" -f rtwshared.mk  OPTS="-DNRT -DIS_SIM_TARGET"
