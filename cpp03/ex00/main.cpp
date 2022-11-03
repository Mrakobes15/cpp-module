/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 15:58:20 by aseptimu          #+#    #+#             */
/*   Updated: 2022/04/30 18:35:33 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	std::string s1 = "Sanya";
	std::string s2 = "Anton";

	ClapTrap  c1(s1);
	ClapTrap  c2(s2);

	std::cout << std::endl;
	c1.beRepaired(10);
	std::cout << std::endl;

	std::cout << std::endl;
	c1.attack(s2);
	c2.takeDamage(5);
	std::cout << std::endl;

	std::cout << std::endl;
	c2.beRepaired(3);
	c2.beRepaired(2);
	std::cout << std::endl;

	std::cout << std::endl;
	c2.attack(s1);
	c1.takeDamage(10);
	std::cout << std::endl;

	std::cout << std::endl;
	c1.beRepaired(10);
	c1.attack(s2);
	std::cout << std::endl;

	std::cout << std::endl;
	c2.attack(s1);
	c1.takeDamage(5);
	std::cout << std::endl;
	return (0);
}