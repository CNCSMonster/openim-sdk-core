

// cpp���Ƿ����ʹ��ģ�嶨�庯��
// cpp��ģ���е����Ƿ������һ������

#include <functional>
#include <iostream>

#define NUM_OF_FUNCTION 4
// ����functional����
std::function<void(void)>* fs= new std::function<void(void)>[NUM_OF_FUNCTION];
template<int N>
void show(){
  fs[N]();
}
// ���庯��ָ������ void(void)���͵�
namespace {
  void (*fps[NUM_OF_FUNCTION])() ;
  // ʹ�õݹ�ģ������һϵ�к���
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
//��֤��ʼ�������ڿ⺯����ʼִ��ǰִ��
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