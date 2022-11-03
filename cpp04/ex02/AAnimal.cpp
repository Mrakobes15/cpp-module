/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbeatris <fbeatris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:03:15 by fbeatris          #+#    #+#             */
/*   Updated: 2022/01/27 17:00:08 by fbeatris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal(void)
{
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &origin)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = origin;
}

AAnimal&	AAnimal::operator=(AAnimal const & origin)
{
	std::cout << "AAnimal copy assignment operator called" << std::endl;
	this->type = origin.type;
	return (*this);
}

std::string	AAnimal::getType(void) const
{
	return(this->type);
}

void	AAnimal::setType(std::string type)
{
	this->type = type;
}

// void	AAnimal::makeSound(void) const
// {
// 	std::cout << "* Some AAnimal sound *" << std::endl;
// }