#include "cf.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void show(char *s){
  printf("show: %s\n", s);
}

int main(){
  call_cb_s(show);
  // sleep 3 s
  sleep(3);
  return 0;
}