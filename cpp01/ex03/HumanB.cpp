#include "HumanB.h"
#include "Weapon.h"
#include <iostream>

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;
}

Weapon* HumanB::getWeapon() {
    return this->weapon;
}

void HumanB::attack() {
    if (this->weapon != NULL) {
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    } else {
        std::cout << this->name << " don't have a weapon!" << std::endl;
    }
}