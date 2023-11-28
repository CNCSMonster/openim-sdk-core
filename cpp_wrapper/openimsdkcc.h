#ifndef OPENIMSDKCPP_H
#define OPENIMSDKCPP_H

// 需改上面代码,只定义加法器的声明,把实现放在其他文件
// Adder.h
class Adder {
public:
    Adder(int i = 0);
    void addNum(int number);
    int getTotal();
private:
    int total;
};

#endif // OPENIMSDKCPP_H