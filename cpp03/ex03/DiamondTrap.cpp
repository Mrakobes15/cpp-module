/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 11:39:40 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/01 18:02:35 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Constructors
DiamondTrap::DiamondTrap()
{
	ClapTrap::_name = "DiamondTrap_clap_name";
	this->_name = "DiamondTrap";
	this->_hp = 100;
	this->_energy = 50;
	this->_attackDamage = 30;
	std::cout << "Default Constructor called of DiamondTrap " << _name << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name)
{
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hp = 100;
	this->_energy = 50;
	this->_attackDamage = 30;
	std::cout << "Field Constructor called of DiamondTrap " << _name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	ClapTrap::_name = copy.ClapTrap::_name;
	this->_name = copy._name;
	this->_hp = copy._hp;
	this->_energy = copy._energy;
	this->_attackDamage = copy._attackDamage;
	std::cout << "Copy Constructor called of DiamondTrap " << _name << std::endl;
}

//Destructor
DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor called of DiamondTrap " << _name << std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "My name: " << _name << ". My ClapTrap name: " << ClapTrap::_name << std::endl;
}

// Operators
DiamondTrap & DiamondTrap::operator=(const DiamondTrap &assign)
{
	ClapTrap::_name = assign.ClapTrap::_name;
	_name = assign.getName();
	_hp = assign.getHp();
	_energy = assign.getEnergy();
	_attackDamage = assign.getAttackDamage();
	return *this;
}

std::string DiamondTrap::getName() const {
	return (this->_name);
}

void DiamondTrap::setName(std::string name) {
	this->_name = name;
}
