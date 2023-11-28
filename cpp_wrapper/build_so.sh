# compile cpp wrapper code to .so

g++ -fPIC -shared -o openimsdkcc.so openimsdkcc.cc ./openimsdk.so