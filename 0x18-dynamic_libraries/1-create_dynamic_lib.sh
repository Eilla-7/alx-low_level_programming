#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -fPIC -c *.c
gcc -shared -o liball.so *.c
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
