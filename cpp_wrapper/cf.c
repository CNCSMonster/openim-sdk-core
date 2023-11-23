// 定义3种函数
#include <pthread.h>
typedef void (*CB_S)(char *);
// typedef void (*CB_I_S)(int,char *);
// typedef void (*CB_S_I_S_S)(char *,int,char *,char *);
// typedef void (*CB_S_I_S_S_I)(char *,int,char *,char *,int);

// 定义一个接受回调函数的函数,立即返回,异步调用回调函数
void call_back_s(CB_S cb){
  // 要求,立即返回,但是异步地在若干时间后调用回调函数
  // 创建一个线程,线程中执行休眠1s后调用回调函数,传入hello
  // 创建线程,使用pthread
  
  int ok=pthread_create(NULL,NULL,cb,"hello");
  // ok==0,创建成功
  if (ok!=0){
    // 创建失败,
    // 立即返回
    cb("error");
  }else{
    // 创建成功
    // 立即返回
  }
}

int main(){

}