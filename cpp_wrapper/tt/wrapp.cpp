
#include "callback.h"s
// typedef void (*CB_S)(char *);
// typedef void (*CB_I_S)(int,char *);
// typedef void (*CB_S_I_S_S)(char *,int,char *,char *);
// typedef void (*CB_S_I_S_S_I)(char *,int,char *,char *,int);

// // 针对上面四种类型函数提供1s后回调函数
// void call_cb_s(CB_S cb);
// void call_cb_i_s(CB_I_S cb);
// void call_cb_s_i_s_s(CB_S_I_S_S cb);
// void call_cb_s_i_s_s_i(CB_S_I_S_S_I cb);
#include <functional>
#include <string>
#include <iostream>

// define max num of callback function stored
#define MAX_NUM_OF_CB_S 10
#define MAX_NUM_OF_CB_I_S 10
#define MAX_NUM_OF_CB_S_I_S_S 10
#define MAX_NUM_OF_CB_S_I_S_S_I 10
// 使用递归模板编程定义足够的常量函数指针数组
namespace {
  CB_S* _fps_cb_s=new CB_S[MAX_NUM_OF_CB_S];
  CB_I_S* _fps_cb_i_s=new CB_I_S[MAX_NUM_OF_CB_I_S];
  CB_S_I_S_S* _fps_cb_s_i_s_s=new CB_S_I_S_S[MAX_NUM_OF_CB_S_I_S_S];
  CB_S_I_S_S_I* _fps_cb_s_i_s_s_i=new CB_S_I_S_S_I[MAX_NUM_OF_CB_S_I_S_S_I];
  // c type func interface call cpp function
  std::function<const std::string&>* _cpp_function_cb_s=new std::function<const std::string&>[MAX_NUM_OF_CB_S];
  std::function<const std::string&>* _cpp_function_cb_i_s=new std::function<const std::string&>[MAX_NUM_OF_CB_I_S];
  std::function<const std::string&>* _cpp_function_cb_s_i_s_s=new std::function<const std::string&>[MAX_NUM_OF_CB_S_I_S_S];
  std::function<const std::string&>* _cpp_function_cb_s_i_s_s_i=new std::function<const std::string&>[MAX_NUM_OF_CB_S_I_S_S_I];
  template<int N>
  void _generate_cb_s(){
    _fps_cb_s[N]=[](char* c_str){
      _call_cb_s<N>(std::string(c_str));
    };
    _generate_cb_s<N-1>();
  }
  template<>
  void _generate_cb_s<0>(){
    _fps_cb_s[0]=[](char* c_str){
      _call_cb_s<0>(std::string(c_str));
    };
  }
}
// init function
void init(){
  _generate_cb_s<MAX_NUM_OF_CB_S-1>();
}

// 
int main(){

}

