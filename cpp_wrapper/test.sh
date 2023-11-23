#!/bin/bash

# 这个脚本用来运行 test.cpp 相关的测试

# test.c 中编写了用来编译成动态库的c程序
# 里面有个c_function函数, 用来测试c程序的调用
# void c_function()
# 里面有 c_function_i(int) 函数,等等
# 编译成动态库
gcc -shared -fPIC -o libtest.so test.c
