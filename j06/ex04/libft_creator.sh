#!/bin/sh
gcc -c *.c
ar rc libstr.a *.o
gcc -L. -lstr
ranlib libstr.a
