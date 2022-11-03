/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbeatris <fbeatris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:03:15 by fbeatris          #+#    #+#             */
/*   Updated: 2022/01/27 17:00:08 by fbeatris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "  Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "  Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &origin)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = origin;
}

Cat&	Cat::operator=(Cat const & origin)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	this->type = origin.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat says \"Mewwww\"" << std::endl;
}