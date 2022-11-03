/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crendeha <crendeha@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 21:31:06 by crendeha          #+#    #+#             */
/*   Updated: 2022/01/23 22:07:36 by crendeha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main()
{
	Data *ptr = new Data("it's an easy problem");
	std::cout << "Addr of initial ptr: " << ptr
			  << "; secret: " << ptr->getSecret()
			  << std::endl;

	uintptr_t raw = serialize(ptr);
	Data *new_ptr = deserialize(raw);

	std::cout << "Addr of new ptr: " << new_ptr
			  << "; secret: " << new_ptr->getSecret()
			  << std::endl;

	delete ptr;
	return 0;
}
