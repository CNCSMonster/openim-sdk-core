#include "openimsdkcpp.h"

void Adder::addNum(int number) {
    total += number;
}
int Adder::getTotal() {
    return total;
}


//g++ --shared -c ./ta.cpp -fPIC -o ./ta.so
//g++ -shared t

//g++ -c -fPIC ./ta.cpp -o ./ta.o
//g++ -shared -o ./ta.so ./ta.o