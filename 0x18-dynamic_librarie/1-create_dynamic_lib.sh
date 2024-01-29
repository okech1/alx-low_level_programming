#!/bin/bash
gcc -wall -wetra -werror -pedantic -c -fpic *.c
gcc -shared -o liball.so *.0
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
