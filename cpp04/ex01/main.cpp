/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbeatris <fbeatris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 19:07:05 by fbeatris          #+#    #+#             */
/*   Updated: 2022/01/29 23:05:57 by fbeatris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	std::cout << std::endl << std::endl;
	
	int		qty = 4;
	Animal 	*animals[qty];
	int		k = 0;

	while (k < qty / 2)
		animals[k++] = new Dog;
	while (k < qty)
		animals[k++] = new Cat;
	std::cout << "---" << std::endl;
	
	k = 0;
	while (k < qty)
		animals[k++]->makeSound();
	
	std::cout << "---" << std::endl;
	k = 0;
	while (k < qty)
		delete animals[k++];
	
}