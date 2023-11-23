#include "wrapp.h"
#include <iostream>
#include <string>
#include <functional>
#ifdef _WIN32
#include <Windows.h>
#elif __linux__
#include <thread>
#include <chrono>
#endif // _WIN32
int main() {
    std::string s1 = "hello world";
    cpp_wrapp([s1](const std::string& s) {
        std::cout << s <<s1 << std::endl;
    });
#ifdef _WIN32
    Sleep(2000);
#elif __linux__
    std::this_thread::sleep_for(std::chrono::seconds(2));
#endif // _WIN32
    return 0;
}