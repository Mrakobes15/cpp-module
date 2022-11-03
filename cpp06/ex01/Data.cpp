/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crendeha <crendeha@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 21:31:45 by crendeha          #+#    #+#             */
/*   Updated: 2022/01/23 21:46:54 by crendeha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : _secret("no secret") {}

Data::Data(const std::string &input) : _secret(input) {}

Data::Data(const Data &src)
{
	*this = src;
}

Data::~Data() {}

Data &Data::operator=(const Data &rhs)
{
	(void)rhs;
	return *this;
}

std::string Data::getSecret() const
{
	return this->_secret;
}
