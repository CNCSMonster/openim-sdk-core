#!/bin/bash
# 编译库
./build_c_so.sh
./build_cpp_so.sh
# 使用动态链接的方式编译运行程序
g++ -o test test.cc ./cf.so ./ccf.so 
./test