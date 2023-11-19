# 使用一行命令编译c文件为 静态链接库
gcc -c add.c -o add.o && ar rcs libadd.a add.o

