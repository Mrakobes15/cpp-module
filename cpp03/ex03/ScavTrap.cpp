/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 12:54:16 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/01 13:01:27 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructors
ScavTrap::ScavTrap()
{
	this->_hp = 100;
	this->_energy = 50;
	this->_attackDamage = 20;
	std::cout << "Default Constructor called of ScavTrap " << this->_name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy._name)
{
	_hp = copy._hp;
	_energy = copy._energy;
	_attackDamage = copy._attackDamage;
	std::cout << "Copy Constructor called of ScavTrap " << this->_name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_energy = 50;
	this->_attackDamage = 20;
	std::cout << "Field Constructor called of ScavTrap " << this->_name << std::endl;
}

// Destructor
ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called of ScavTrap " << this->_name << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (!_hp)
		std::cout << "ScavTrap " << _name << " dead" << std::endl;
	else if (!_energy)
		std::cout << "ScavTrap " << _name << ": not enough energy" << std::endl;
	else
	{
		--_energy;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}

// Operators
ScavTrap & ScavTrap::operator=(const ScavTrap &assign)
{
	_name = assign.getName();
	_hp = assign.getHp();
	_energy = assign.getEnergy();
	_attackDamage = assign.getAttackDamage();
	return *this;
}

