#include <iostream>
#include <functional>
#include <thread>
#include <chrono>
#include "openimsdkcc.h"
using namespace std;


// cpp代码使用c_wrapper的函数编译成的动态库
int main(){
  auto sdkMgr = OpenIMManager::GetInstance();
  string operationID="12345";
  string uid= "4365007572";
  string token="eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJVc2VySUQiOiI0MzY1MDA3NTcyIiwiUGxhdGZvcm1JRCI6MiwiZXhwIjoxNzAyNjk4NTkzLCJuYmYiOjE2OTQ5MjIyOTMsImlhdCI6MTY5NDkyMjU5M30.2Bp8lMgIWXZdPp4J_BWGqJ14gQqiHxGiICxfxrgAq-A";
  string jsonString="{\"platformID\": 2, \"apiAddr\": \"http://125.124.195.201:10002\", \"wsAddr\":\"ws://125.124.195.201:10001\",\"dataDir\": \"./\", \"logLevel\": 5, \"isLogStandardOutput\": true, \"logFilePath\": \"./\", \"isExternalExtensions\": true}";
  GoUint8 init_result;
  init_result = sdkMgr.InitSDK([](int event,const string& data){
    cout<<"init> "<<"event:"<<event<<" data:"<<data<<endl;
  },operationID, jsonString);
  cout<<"init_result:"<<init_result<<endl;



  std::this_thread::sleep_for(std::chrono::seconds(1000));
} 