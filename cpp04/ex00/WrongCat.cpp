/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbeatris <fbeatris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:03:15 by fbeatris          #+#    #+#             */
/*   Updated: 2022/01/28 16:51:02 by fbeatris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "  WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "  WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &origin)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = origin;
}

WrongCat&	WrongCat::operator=(WrongCat const & origin)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	this->type = origin.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat says \"Mewwww\"" << std::endl;
}