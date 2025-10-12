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


class Monster;

class player {
public:
   std::string name;
   int maxHp;
   int attackPower;
   std::vector<std::string> inventory
   std::string currentLocationKey;
    
   player (std::string name)
   : name(name), maxHp(100)
   hp(100),attackPower(10)
   currentLocationKey("Alone") {
              inventory.push_back("Health Potion");
   }

   bool isAlive() const {
          return hp > 0;
                 hp = 0;

   }
   void usePotion() {
             auto it =
      std::find(inventory.begin(),
      inventory.end(), "Health positon");
      
      if (it != inventory.erase(it);




   }







   }





























}