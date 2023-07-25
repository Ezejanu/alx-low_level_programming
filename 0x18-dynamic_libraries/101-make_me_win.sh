#!/bin/bash
gcc -fPIC -shared -o jackpot.so jackpot.c
LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
