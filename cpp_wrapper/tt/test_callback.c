#include "callback.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// 测试c接口,测试回调
void cb_s(char *s){
  printf("cb_s: %s\n", s);
}
void cb_i_s(int i, char *s){
  printf("cb_i_s: %d, %s\n", i, s);
}
void cb_s_i_s_s(char *s, int i, char *s1, char *s2){
  printf("cb_s_i_s_s: %s, %d, %s, %s\n", s, i, s1, s2);
}
void cb_s_i_s_s_i(char *s, int i, char *s1, char *s2, int i1){
  printf("cb_s_i_s_s_i: %s, %d, %s, %s, %d\n", s, i, s1, s2, i1);
}
int main(){
  call_cb_s(cb_s);
  call_cb_i_s(cb_i_s);
  call_cb_s_i_s_s(cb_s_i_s_s);
  call_cb_s_i_s_s_i(cb_s_i_s_s_i);
  // sleep 3 s
  sleep(2);
  return 0;
}