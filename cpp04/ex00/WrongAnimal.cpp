/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbeatris <fbeatris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:03:15 by fbeatris          #+#    #+#             */
/*   Updated: 2022/01/27 17:00:08 by fbeatris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void) : type("Some WrongAnimal")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &origin)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = origin;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const & origin)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	this->type = origin.type;
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return(this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "* Some WrongAnimal sound *" << std::endl;
}