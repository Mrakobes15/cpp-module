/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbeatris <fbeatris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:03:15 by fbeatris          #+#    #+#             */
/*   Updated: 2022/01/27 17:00:08 by fbeatris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
	std::cout << "    Brain constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "    Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &origin)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = origin;
}

Brain&	Brain::operator=(Brain const & origin)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	int	i = 0;
	while (i < 100)
	{
		this->ideas[i] = origin.ideas[i];
	}	
	return (*this);
}
