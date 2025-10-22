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

   {
   void usePotion() {
             auto it =
      std::find(inventory.begin(),
      inventory.end(), "Health positon");
      
      if (it != inventory.erase(it);
         inventory.erase(it);
         int healAmount = 10;
         hp = std::min(maxHp, hp + healAmount);
         typeText("you used a Health Potion and restored " + std::to_string(healAmount) + " HP.");
         showStats();
       } else {
          typeText("You don't have any Health Potions!");
       }
      }
      
      void attack(Monster& monster)  {
         int damage = getRandom(attackPower - 2, attackPower + 2);
         typeText("You attack the " + monster.name + " for " + std::to_string(damage) + "damage!")
         monster.takeDamage(int damage) {
            
           
      void takedamage(int damage) {  
            hp -= damage;
            if (hp < 0) hp =0;
            typeText(name + " takes " + std::to_string(damage))
          }
      void showStats() const {
           typeText("---" + name + "'s Stats ---");
           typeText("HP: " + std::to_string(hp) + "/" + std::to_string(maxHp));
           typeText("Attack: " + std::to_string(attackPower));

           typeText("Inventory:");
           if (inventory.empty()) {
                    typeText(" (Empty)");
            

           }





   }



























