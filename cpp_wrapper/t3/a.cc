#include <string>
#include <iostream>

int main(){
  //
  std::string a= "hello";
  char* ss=const_cast<char*>(a.c_str());
  printf("%s",ss);
  // 
  return 0;
}