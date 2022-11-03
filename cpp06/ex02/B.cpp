/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crendeha <crendeha@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 21:59:48 by crendeha          #+#    #+#             */
/*   Updated: 2022/01/23 22:03:48 by crendeha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B() {}

B::B(const B &src)
{
	*this = src;
}

B::~B() {}

B &B::operator=(const B &rhs)
{
	(void)rhs;
	return *this;
}
