/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crendeha <crendeha@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 22:07:10 by crendeha          #+#    #+#             */
/*   Updated: 2022/01/23 22:23:10 by crendeha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	srand((unsigned)time(NULL));

	int idx = rand() % 3;
	if (idx == 0)
	{
		std::cout << "Random type: A" << std::endl;
		return new A();
	}
	else if (idx == 1)
	{
		std::cout << "Random type: B" << std::endl;
		return new B();
	}
	else
	{
		std::cout << "Random type: C" << std::endl;
		return new C();
	}
}

void identify(Base *p)
{
	A *a;
	if ((a = dynamic_cast<A *>(p)) != NULL)
	{
		std::cout << "Identified by ptr cast: A" << std::endl;
		return;
	}

	B *b;
	if ((b = dynamic_cast<B *>(p)) != NULL)
	{
		std::cout << "Identified by ptr cast: B" << std::endl;
		return;
	}

	C *c;
	if ((c = dynamic_cast<C *>(p)) != NULL)
	{
		std::cout << "Identified by ptr cast: C" << std::endl;
		return;
	}
}

void identify(Base &p)
{
	try
	{
		A a;
		a = dynamic_cast<A &>(p);
		std::cout << "Identified by reference cast: A" << std::endl;
		return;
	}
	catch (const std::exception &e)
	{
		(void)e;
	}

	try
	{
		B b;
		b = dynamic_cast<B &>(p);
		std::cout << "Identified by reference cast: B" << std::endl;
		return;
	}
	catch (const std::exception &e)
	{
		(void)e;
	}
	
	try
	{
		C c;
		c = dynamic_cast<C &>(p);
		std::cout << "Identified by reference cast: C" << std::endl;
		return;
	}
	catch (const std::exception &e)
	{
		(void)e;
	}
}

int main()
{
	Base *ptr = generate();
	identify(ptr);
	identify(*ptr);

	return 0;
}