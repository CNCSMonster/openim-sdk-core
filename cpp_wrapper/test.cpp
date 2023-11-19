#include <iostream>
#include <functional>
#include "openimsdkcpp.h"
using namespace std;

std::function<int(int,int)> show(const std::function<int(int,int)>& f){
  return [f](int a,int b){
    return f(a,b);
  };
}

// wrapp CB_S
static std::function<void(char*)> _wrapper_cpp_function(const std::function<void(const std::string&)>& cpp_function) {
  return [cpp_function](char* c_str){
    cpp_function(c_str);
  };
}

// wrapp CB_I_S
static std::function<void(int,char*)> _wrapper_cpp_function(const std::function<void(int,const std::string&)>& cpp_function)
{
  return [cpp_function](int code ,char* c_str)->void {
    cpp_function(code,c_str);
  };
}
static std::function<void(int,char*)> _wrapper_cpp_function(const std::function<void(int,std::string)>& cpp_function) {
  return [cpp_function](int code ,char* c_str)->void {
    cpp_function(code,c_str);
  };
}


// wrapp CB_S_I_S_S
static std::function<void(char*,int,char*,char*)> _wrapper_cpp_function(const std::function<void(const std::string&,int,const std::string&,const std::string&)>& cpp_function)
{
  return [cpp_function](char* operationID,int code,char* c_str,char* c_str2) -> void {
    cpp_function(std::string(operationID),code,std::string(c_str),std::string(c_str2));
  };
}
static std::function<void(char*,int,char*,char*)> _wrapper_cpp_function(const std::function<void(std::string,int,std::string,std::string)>& cpp_function) {
  return [cpp_function](char* operationID,int code,char* c_str,char* c_str2) -> void {
    cpp_function(std::string(operationID),code,std::string(c_str),std::string(c_str2));
  };
}

// wrapp CB_S_I_S_S_I
static std::function<void(char*,int,char*,char*,int)> _wrapper_cpp_function(const std::function<void(const std::string&,int,const std::string&,const std::string&,int)>& cpp_function)
{
  return [cpp_function](char* operationID,int code,char* c_str,char* c_str2,int c_int) -> void {
    cpp_function(std::string(operationID),code,std::string(c_str),std::string(c_str2),c_int);
  };
}
static std::function<void(char*,int,char*,char*,int)> _wrapper_cpp_function(const std::function<void(std::string,int,std::string,std::string,int)>& cpp_function) {
  return [cpp_function](char* operationID,int code,char* c_str,char* c_str2,int c_int) -> void {
    cpp_function(std::string(operationID),code,std::string(c_str),std::string(c_str2),c_int);
  };
}


int main(){
 
} 