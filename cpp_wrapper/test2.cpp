
#include <string>
#include <iostream>
#include <functional>
#include <memory>
// 导入this_thread需要的库
#include <thread>
// cpp异步调用需要用到的库
#include <future>
using namespace std;



namespace {
  // wrapp CB_S
  std::function<void(char*)> _wrapper_cpp_function(const std::function<void(const std::string&)>& cpp_function) {
    return [cpp_function](char* c_str){
      cpp_function(c_str);
    };
  }
  // wrapp CB_I_S
  std::function<void(int,char*)> _wrapper_cpp_function(const std::function<void(int,const std::string&)>& cpp_function)
  {
    return [cpp_function](int code ,char* c_str)->void {
      cpp_function(code,c_str);
    };
  }
  // wrapp CB_S_I_S_S
  std::function<void(char*,int,char*,char*)> _wrapper_cpp_function(const std::function<void(const std::string&,int,const std::string&,const std::string&)>& cpp_function)
  {
    return [cpp_function](char* operationID,int code,char* c_str,char* c_str2) -> void {
      cpp_function(std::string(operationID),code,std::string(c_str),std::string(c_str2));
    };
  }
  // wrapp CB_S_I_S_S_I
  std::function<void(char*,int,char*,char*,int)> _wrapper_cpp_function(const std::function<void(const std::string&,int,const std::string&,const std::string&,int)>& cpp_function)
  {
    return [cpp_function](char* operationID,int code,char* c_str,char* c_str2,int c_int) -> void {
      cpp_function(std::string(operationID),code,std::string(c_str),std::string(c_str2),c_int);
    };
  }

  template<typename Func> 
  struct CallOnceWrapper {
    std::function<Func> f;
    // 定义析构函数
    ~CallOnceWrapper() {
      // 删除f指向的空间
    }
  };
  // wrapp function to onetime
  // wrapp CB_S to CallOnce
  std::function<void(char*)> _wrapper_callonce_cpp_function(const std::function<void(const std::string&)>& cpp_function) {
    CallOnceWrapper<void(char*)>* callonceWrapper =new CallOnceWrapper<void(char*)>();
    callonceWrapper->f=_wrapper_cpp_function(cpp_function);
    return [callonceWrapper](char* c_str){
      callonceWrapper->f(c_str);
      delete callonceWrapper;
    };
  }
//   // wrapp CB_I_S to CallOnce
//   std::function<void(int,char*)> _wrapper_callonce_cpp_function(const std::function<void(int,const std::string&)>& cpp_function)
//   {
//     CallOnceWrapper<void(int,char*)>* callonceWrapper =new CallOnceWrapper<void(int,char*)>();
//     callonceWrapper->f=_wrapper_cpp_function(cpp_function);
//     return [callonceWrapper](int code ,char* c_str)->void {
//       callonceWrapper->f(code,c_str);
//       delete callonceWrapper;
//     };
//   }
//   // wrapp CB_S_I_S_S to CallOnce
//   std::function<void(char*,int,char*,char*)> _wrapper_callonce_cpp_function(const std::function<void(const std::string&,int,const std::string&,const std::string&)>& cpp_function)
//   {
//     CallOnceWrapper<void(char*,int,char*,char*)>* callonceWrapper =new CallOnceWrapper<void(char*,int,char*,char*)>();
//     callonceWrapper->f=_wrapper_cpp_function(cpp_function);
//     return [callonceWrapper](char* operationID,int code,char* c_str,char* c_str2) -> void {
//       callonceWrapper->f(operationID,code,std::string(c_str),std::string(c_str2));
//       delete callonceWrapper;
//     };
//   }
//   // wrapp CB_S_I_S_S_I to CallOnce
//   std::function<void(char*,int,char*,char*,int)> _wrapper_callonce_cpp_function(const std::function<void(const std::string&,int,const std::string&,const std::string&,int)>& cpp_function)
//   {
//     CallOnceWrapper<void(char*,int,char*,char*,int)>* callonceWrapper =new CallOnceWrapper<void(char*,int,char*,char*,int)>();
//     callonceWrapper->f=_wrapper_cpp_function(cpp_function);
//     return [callonceWrapper](char* operationID,int code,char* c_str,char* c_str2,int c_int) -> void {
//       callonceWrapper->f(operationID,code,c_str,c_str2,c_int);
//       delete callonceWrapper;
//     };
//   }

}

// test case 

// def CB_S
typedef void (*CB)(char*);
void c_call(CB cb){
  // 异步执行cb,直接退出,同时等待两s后异步执行cb
  // 使用cpp的 异步调用
  std::async(std::launch::async,[cb](){
    std::this_thread::sleep_for(std::chrono::seconds(2));
    cb("hello world");
  });
}


int main(){
  std::function<void(char*)> cppf=[](char* s){
    cout<<s<<endl;
  };
  c_call((CB)cppfs.target<void(*)(char*)>());
  //休眠5s
  std::this_thread::sleep_for(std::chrono::seconds(5));
  return 0;
}