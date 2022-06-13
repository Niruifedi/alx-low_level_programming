#!/bin/bash
gcc -fpic -g -c -Wall -pedantic -Werror -Wextra *.c
gcc *.o -shared -o liball.so
