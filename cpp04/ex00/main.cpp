/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbeatris <fbeatris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 19:07:05 by fbeatris          #+#    #+#             */
/*   Updated: 2022/01/29 17:03:15 by fbeatris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "---" << std::endl;

	std::cout << meta->getType() << std::endl;
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;

	meta->makeSound();
	i->makeSound();
	j->makeSound();
	std::cout << "---" << std::endl;

	delete i;
	delete j;
	delete meta;
	std::cout << std::endl << std::endl;

	WrongAnimal* wrong_animal = new WrongAnimal;
	WrongAnimal* wrong_cat = new WrongCat;
	std::cout << "---" << std::endl;

	std::cout << wrong_animal->getType() << std::endl;
	std::cout << wrong_cat->getType() << std::endl;

	wrong_animal->makeSound();
	wrong_cat->makeSound();
	std::cout << "---" << std::endl;

	delete	wrong_cat;
	delete	wrong_animal;
	std::cout << std::endl << std::endl;

	WrongCat *wrong_cat2 = new WrongCat;
	std::cout << "---" << std::endl;
	wrong_cat2->makeSound();
	std::cout << "---" << std::endl;
	delete wrong_cat2;
}
