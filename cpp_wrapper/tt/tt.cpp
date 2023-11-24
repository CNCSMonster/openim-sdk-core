

// cpp中是否可以使用模板定义函数
// cpp中模板中的量是否可以是一个常数

#include <functional>
#include <iostream>

#define NUM_OF_FUNCTION 4
// 定义functional数组
std::function<void(void)>* fs= new std::function<void(void)>[NUM_OF_FUNCTION];
template<int N>
void show(){
  fs[N]();
}
// 定义函数指针数组 void(void)类型的
namespace {
  void (*fps[NUM_OF_FUNCTION])() ;
  // 使用递归模板生成一系列函数
  template<int N>
  void generate(){
    fps[N]=[](){
      show<N>();
    };
    generate<N-1>();
  }
  
  template<>
  void generate<0>(){
    fps[0]=[](){
      show<0>();
    };
  }
}
//保证初始化函数在库函数开始执行前执行
void init(){
    generate<NUM_OF_FUNCTION-1>();
}
int main(){
  init();
  fs[0]=[](){
    std::cout<< "0:"<<std::endl;
  };
  fs[1]=[](){
    std::cout<< "1:"<<std::endl;
  };
  int m;
  using namespace std;
  while(true) {
    cin>>m;
    fps[m]();
  }
  return 0;
}