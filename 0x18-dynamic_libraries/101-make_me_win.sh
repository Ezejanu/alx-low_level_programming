#!/bin/bash
gcc -fPIC -shared -o jackpot.so jackpot.c
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
