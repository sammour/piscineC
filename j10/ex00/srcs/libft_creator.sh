#!/bin/sh
gcc -c *.c
ar rc libstr.a *.o
rm -rf *.o
