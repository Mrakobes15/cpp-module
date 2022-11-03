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

#include <iostream>
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "  Cat constructor called" << std::endl;
	this->brain = new Brain;
}

Cat::~Cat()
{
	std::cout << "  Cat destructor called" << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat &origin)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = origin;
}

Cat&	Cat::operator=(Cat const & origin)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	this->brain = new Brain;
	this->brain = origin.brain;
	this->type = origin.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat says \"Mewwww\"" << std::endl;
}