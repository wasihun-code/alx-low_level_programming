#!/bin/bash
gcc -Wall -fPIC -c *.c
gcc -shared *.o -o liball.so
