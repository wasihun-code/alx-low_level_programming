#!/bin/bash
gcc -g -fPIC -Wall -Werror -Wextra -pedantic *.c -shared -o liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
