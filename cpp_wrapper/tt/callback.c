#include "callback.h"
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
static void t_cb_s(void* cb_s){
  // ÐÝÃß1s
  sleep(1);
  void (*cb)(char *)=cb_s;
  cb("hello");
}
static void t_cb_i_s(void* cb_i_s){
  sleep(1);
  void (*cb)(int, char *)=cb_i_s;
  cb(123, "hello");
}
static void t_cb_s_i_s_s(void* cb_s_i_s_s){
  sleep(1);
  void (*cb)(char *, int, char *, char *)=cb_s_i_s_s;
  cb("hello", 123, "world", "!");
}
static void t_cb_s_i_s_s_i(void* cb_s_i_s_s_i){
  sleep(1);
  void (*cb)(char *, int, char *, char *, int)=cb_s_i_s_s_i;
  cb("hello", 123, "world", "!", 456);
}

void call_cb_s(void (*cb)(char *)){
  pthread_t tid;
  if(pthread_create(&tid, NULL, (void *)t_cb_s, (void *)cb)!=0){
    printf("pthread_create error\n");
    exit(1);
  }
}
void call_cb_i_s(void (*cb)(int, char *)){
  pthread_t tid;
  if(pthread_create(&tid, NULL, (void *)t_cb_i_s, (void *)cb)!=0){
    printf("pthread_create error\n");
    exit(1);
  }
}
void call_cb_s_i_s_s(void (*cb)(char *, int, char *, char *)){
  pthread_t tid;
  if(pthread_create(&tid, NULL, (void *)t_cb_s_i_s_s, (void *)cb)!=0){
    printf("pthread_create error\n");
    exit(1);
  }
}
void call_cb_s_i_s_s_i(void (*cb)(char *, int, char *, char *, int)){
  pthread_t tid;
  if(pthread_create(&tid, NULL, (void *)t_cb_s_i_s_s_i, (void *)cb)!=0){
    printf("pthread_create error\n");
    exit(1);
  }
}


