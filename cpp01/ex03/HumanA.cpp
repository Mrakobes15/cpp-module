#include "HumanA.h"
#include "Weapon.h"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {
    this->name = name;
    this->weapon = weapon;
}

HumanA::~HumanA() {}

void HumanA::setWeapon(Weapon &weapon) {
    this->weapon = weapon;
}

Weapon &HumanA::getWeapon() {
    return this->weapon;
}

void HumanA::attack() {
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}