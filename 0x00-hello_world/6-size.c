#!/bin/bash
gcc -m32 size32.c -o size32 && gcc -m64 size32.c -o size64
