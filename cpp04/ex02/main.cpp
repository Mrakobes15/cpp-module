/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbeatris <fbeatris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 19:07:05 by fbeatris          #+#    #+#             */
/*   Updated: 2022/01/28 18:52:41 by fbeatris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main(void)
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	delete j;
	delete i;

	std::cout << std::endl << std::endl;
	
	int		qty = 6;
	AAnimal 	*AAnimals[qty];
	int		k = 0;

	while (k < qty / 2)
		AAnimals[k++] = new Dog;
	while (k < qty)
		AAnimals[k++] = new Cat;
	std::cout << "---" << std::endl;
	
	k = 0;
	while (k < qty)
		AAnimals[k++]->makeSound();
	
	std::cout << "---" << std::endl;
	k = 0;
	while (k < qty)
		delete AAnimals[k++];
}