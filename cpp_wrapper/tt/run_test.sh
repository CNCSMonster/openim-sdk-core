# test callback lib
gcc -o test_callback test_callback.c ./callback.so 
./test_callback

# test wrapp demo
g++ -o test_wrapp_demo wrapp_demo.cpp ./callback.so -std=c++11
./test_wrapp_demo