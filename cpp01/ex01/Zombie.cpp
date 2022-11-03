#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() : name("Default zombie") {
    std::cout << "Zombie " << name << " is alive!" << std::endl;
}

Zombie::Zombie(std::string name) : name(name) {
    std::cout << "Zombie " << name << " is alive!" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << name << " is dead!" << std::endl;
}

void Zombie::announce() {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}