#!/bin/bash
gcc -fPIC -shared -o jackpot.so jackpot.c
export LD_PRELOAD=$PWD:$LD_LIBRARY_PATH
