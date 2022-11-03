#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include "Weapon.h"

class HumanA {
private:
    std::string name;
    Weapon& weapon;
public:
    HumanA( std::string name, Weapon &weapon );
    ~HumanA( void );
    void setName ( std::string name );
    void setWeapon ( Weapon &weapon );
    std::string getName ( void );
    Weapon &getWeapon ( void );
    void attack( void );
};


#endif
