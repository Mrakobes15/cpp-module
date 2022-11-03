/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 12:54:13 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/01 12:54:13 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructors
FragTrap::FragTrap() : ClapTrap("FragTrap")
{
	this->_hp = 100;
	this->_energy = 100;
	this->_attackDamage = 30;
	std::cout << "Default Constructor called of FragTrap " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy._name)
{
	_hp = copy._hp;
	_energy = copy._energy;
	_attackDamage = copy._attackDamage;
	std::cout << "Copy Constructor called of FragTrap " << _name << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_energy = 100;
	this->_attackDamage = 30;
	std::cout << "Field Constructor called of FragTrap " << _name << std::endl;
}

// Destructor
FragTrap::~FragTrap()
{
	std::cout << "Destructor called of FragTrap " << _name << std::endl;
}

void FragTrap::highFivesGuys(void) 
{
	std::cout << "FragTrap " << _name << ": High five guys!" << std::endl;
}

// Operators
FragTrap & FragTrap::operator=(const FragTrap &assign)
{
	_name = assign.getName();
	_hp = assign.getHp();
	_energy = assign.getEnergy();
	_attackDamage = assign.getAttackDamage();
	return *this;
}



