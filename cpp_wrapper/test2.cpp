
#include <string>
#include <iostream>
#include <functional>
using namespace std;

// for cpp 20

void show(const string& str){
  cout<<str<<endl;
}

// wrapp CB_S
static std::function<void(char*)> _wrapper_cpp_function(std::function<void(std::string&&)> cpp_function)
{
  return [cpp_function](char* c_str){
    cpp_function(c_str);
  };
}
static std::function<void(char*)> _wrapper_cpp_function(std::function<void(std::string)> cpp_function) {
  return [cpp_function](char* c_str){
    cpp_function(c_str);
  };
}
static std::function<void(char*)> _wrapper_cpp_function(std::function<void(const std::string&)> cpp_function) {
  return [cpp_function](char* c_str){
    cpp_function(c_str);
  };
}
// wrapp CB_I_S
static std::function<void(int,char*)> _wrapper_cpp_function(std::function<void(int,std::string&&)> cpp_function)
{
  return [cpp_function](int code,char* c_str) -> void {
    cpp_function(code,std::string(c_str));
  };
}
static std::function<void(int,char*)> _wrapper_cpp_function(std::function<void(int,std::string&&)> cpp_function) {
  return [cpp_function](int code ,char* c_str)->void {
    cpp_function(code,std::string(c_str));
  };
}
// wrapp CB_S_I_S_S
static std::function<void(char*,int,char*,char*)> _wrapper_cpp_function(std::function<void(std::string&&,int,std::string&&,std::string&&)> cpp_function)
{
  return [cpp_function](char* operationID,int code,char* c_str,char* c_str2) -> void {
    cpp_function(std::string(operationID),code,std::string(c_str),std::string(c_str2));
  };
}
static std::function<void(char*,int,char*,char*)> _wrapper_cpp_function(std::function<void(std::string,int,std::string,std::string)> cpp_function) {
  return [cpp_function](char* operationID,int code,char* c_str,char* c_str2) -> void {
    cpp_function(std::string(operationID),code,std::string(c_str),std::string(c_str2));
  };
}
static std::function<void(char*,int,char*,char*)> _wrapper_cpp_function(std::function<void(char*,int,char*,char*)> cpp_function) {
  return [cpp_function](char* operationID,int code,char* c_str,char* c_str2) -> void {
    cpp_function(operationID,code,c_str,c_str2);
  };
}
// wrapp CB_S_I_S_S_I
static std::function<void(char*,int,char*,char*,int)> _wrapper_cpp_function(std::function<void(std::string&&,int,std::string&&,std::string&&,int)> cpp_function)
{
  return [cpp_function](char* operationID,int code,char* c_str,char* c_str2,int c_int) -> void {
    cpp_function(std::string(operationID),code,std::string(c_str),std::string(c_str2),c_int);
  };
}
static std::function<void(char*,int,char*,char*,int)> _wrapper_cpp_function(std::function<void(std::string,int,std::string,std::string,int)> cpp_function) {
  return [cpp_function](char* operationID,int code,char* c_str,char* c_str2,int c_int) -> void {
    cpp_function(std::string(operationID),code,std::string(c_str),std::string(c_str2),c_int);
  };
}

static std::functio

int main(){
  
}