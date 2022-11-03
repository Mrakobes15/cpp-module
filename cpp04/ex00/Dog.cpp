/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbeatris <fbeatris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:03:15 by fbeatris          #+#    #+#             */
/*   Updated: 2022/01/27 17:00:08 by fbeatris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "  Dog constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "  Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &origin)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = origin;
}

Dog&	Dog::operator=(Dog const & origin)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	this->type = origin.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog says \"Rrrrrr\"" << std::endl;
}