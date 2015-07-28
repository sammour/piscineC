#!/bin/sh
ls -l | sed '0n;N;s/.*\n//'
