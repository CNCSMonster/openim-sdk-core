#include <functional>
#include <string>
#include <iostream>
#include "cf.h"
static std::function<void(const std::string&)> f;
static void _cpp_wrapp(char* s) {
  f(s);
}
void cpp_wrapp(std::function<void(const std::string&)> _f) {
  f = _f;
  call_cb_s(_cpp_wrapp);
}