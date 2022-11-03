/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 12:53:54 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/02 15:03:02 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap() : _name("ClapTrap"), _hp(10), _energy(10), _attackDamage(0) 
{
	std::cout << "Default Constructor called of ClapTrap " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	_name = copy.getName();
	_hp = copy.getHp();
	_energy = copy.getEnergy();
	_attackDamage = copy.getAttackDamage();
	std::cout << "Copy Constructor called of ClapTrap " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _hp(10), _energy(10), _attackDamage(0)
{
	_name = name;
	std::cout << "Fields Constructor called of ClapTrap " << _name << std::endl;
}


// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called of ClapTrap " << _name << std::endl;
}


// Operators
ClapTrap & ClapTrap::operator=(const ClapTrap &assign)
{
	_name = assign.getName();
	_hp = assign.getHp();
	_energy = assign.getEnergy();
	_attackDamage = assign.getAttackDamage();
	return *this;
}


// Getters / Setters
std::string ClapTrap::getName() const
{
	return _name;
}
void ClapTrap::setName(std::string name)
{
	_name = name;
}

unsigned int ClapTrap::getHp() const
{
	return _hp;
}
void ClapTrap::setHp(unsigned int hp)
{
	_hp = hp;
}

unsigned int ClapTrap::getEnergy() const
{
	return _energy;
}
void ClapTrap::setEnergy(unsigned int energy)
{
	_energy = energy;
}

unsigned int ClapTrap::getAttackDamage() const
{
	return _attackDamage;
}
void ClapTrap::setAttackDamage(unsigned int attackDamage)
{
	_attackDamage = attackDamage;
}

void ClapTrap::attack(const std::string& target) {
	if (!_hp)
		std::cout << "ClapTrap " << _name << " dead" << std::endl;
	else if (!_energy)
		std::cout << "ClapTrap " << _name << ": not enough energy" << std::endl;
	else
	{
		--_energy;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (!_hp)
		std::cout << "ClapTrap " << _name << " dead" << std::endl;
	else if (_hp <= amount) {
		_hp = 0;
		std::cout << "ClapTrap " << _name << " got killed" << std::endl;
	}
	else
	{
		_hp -= amount;
		std::cout << "ClapTrap " << _name << " got damage: " << amount << ". Total hp: " << _hp << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (!_hp)
		std::cout << "ClapTrap " << _name << " dead" << std::endl;
	else
	{
		--_energy;
		_hp += amount;
		std::cout << "ClapTrap " << _name << " got repaired: " << amount << ". Total hp: " << _hp << std::endl;
	}

}
