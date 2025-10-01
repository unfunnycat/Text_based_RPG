
#include <iostream>
#include <string>
#include <vector>

// Forward declaration to solve circular dependency if Item has a Character pointer
class Item; 

// Base class for all living entities
class Character {
public:
    // Constructor
    Character(std::string name, int health, int strength)
        : name(name), health(health), strength(strength) {}

    // Virtual destructor for proper cleanup of derived classes
    virtual ~Character() {} 

    void attack(Character& target) {
        std::cout << this->name << " attacks " << target.getName() << "!" << std::endl;
        target.takeDamage(this->strength);
    }

