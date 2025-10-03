
#include <iostream>
#include <string>
#include <vector>

class Item; 

class Character {
public:
    Character(std::string name, int health, int strength)
        : name(name), health(health), strength(strength) {}

    virtual ~Character() {} 

    void attack(Character& target) {
        std::cout << this->name << " attacks " << target.getName() << "!" << std::endl;
        target.takeDamage(this->strength);
    }

  //publish.io
  void main{


}
__glibcxx_requires_partitioned_lower (P_OVERLAY)