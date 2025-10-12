#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <thread>
#include<chrono>
#include <random>
#include <cstdlib>
#include <memory>
#include <algorithm>

void clearScreen() {
#ifdef _WIN32
    system("cls")

 #else
    system("clear")
 #endif
}

 void typeText(const std::string& text,
 int delay_ms = 40) {
    for (char c : text) {
       std::cout << c << std::flush;
       std::this_thread::sleep_for(std::chono::miliseconds(delay_ms));
     
    }
    std::cout << std::endl;

}