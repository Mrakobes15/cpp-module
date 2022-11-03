/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crendeha <crendeha@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 18:31:13 by crendeha          #+#    #+#             */
/*   Updated: 2022/01/23 21:08:03 by crendeha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion() : _input(0.0) {}

Conversion::Conversion(const double &input) : _input(input) {}

Conversion::Conversion(const Conversion &src) { *this = src; }

Conversion::~Conversion() {}

Conversion &Conversion::operator=(const Conversion &rhs)
{
	this->_input = rhs._input;
	return *this;
}

void Conversion::convertToChar(void) const
{
	char castedValue;

	std::cout << "char: ";
	castedValue = static_cast<char>(this->_input);
	if (POS_INFINITY_CHECK || NEG_INFINITY_CHECK || NAN_CHECK ||
		this->_input > std::numeric_limits<char>::max() || this->_input < std::numeric_limits<char>::min())
		std::cout << "impossible" << std::endl;
	else if (castedValue < 32)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << castedValue << "'" << std::endl;
}

void Conversion::convertToInt(void) const
{
	int castedValue;

	std::cout << "int: ";
	castedValue = static_cast<int>(this->_input);
	if (POS_INFINITY_CHECK || NEG_INFINITY_CHECK || NAN_CHECK ||
		this->_input > std::numeric_limits<int>::max() || this->_input < std::numeric_limits<int>::min())
		std::cout << "impossible" << std::endl;
	else
		std::cout << castedValue << std::endl;
}

void Conversion::convertToFloat(void) const
{
	float castedValue;
	float intpart;

	std::cout << "float: ";
	castedValue = static_cast<float>(this->_input);
	if (this->_input > std::numeric_limits<float>::max() || this->_input < std::numeric_limits<float>::lowest())
		std::cout << "impossible" << std::endl;
	else if (std::modf(castedValue, &intpart) == 0.0)
		std::cout << castedValue << ".0f" << std::endl;
	else
		std::cout << castedValue << "f" << std::endl;
}

void Conversion::convertToDouble(void) const
{
	double castedValue;
	double intpart;

	std::cout << "double: ";
	castedValue = static_cast<double>(this->_input);
	if (this->_input > std::numeric_limits<double>::max() || this->_input < std::numeric_limits<double>::lowest())
		std::cout << "impossible" << std::endl;
	else if (std::modf(castedValue, &intpart) == 0.0)
		std::cout << castedValue << ".0" << std::endl;
	else
		std::cout << castedValue << std::endl;
}
