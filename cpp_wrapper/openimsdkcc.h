#ifndef OPENIMSDKCPP_H
#define OPENIMSDKCPP_H

// ����������,ֻ����ӷ���������,��ʵ�ַ��������ļ�
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