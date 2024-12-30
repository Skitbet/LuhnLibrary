// filepath: /d:/Projects/c/build.bat
@echo off
set CC=gcc
set CFLAGS=-I./include

%CC% %CFLAGS% -c src/luhn.c -o src/luhn.o
%CC% %CFLAGS% -c test/test.c -o test/test.o
%CC% -o test src/luhn.o test/test.o

echo Build complete.