#!/bin/bash
# compile c dynamic library

gcc -fPIC -shared -o cf.so cf.c 
