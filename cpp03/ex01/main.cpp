/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 15:58:20 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/01 11:05:50 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{

	ClapTrap *b = new ScavTrap("Senya");
	b->attack("Jopa");
	delete b;
	std::cout << std::endl;

	std::string s1 = "Sanya";
	std::string s2 = "Petya";
	std::string s3 = "Senya";

	ScavTrap t1(s1);
	ScavTrap t2(s2);
	ClapTrap t3(s3);

	std::cout << std::endl;
	t1.attack(s3);
	t3.takeDamage(t1.getAttackDamage());
	t3.takeDamage(t1.getAttackDamage());
	std::cout << std::endl;

	std::cout << std::endl;
	t1.attack(s2);
	t2.takeDamage(t1.getAttackDamage());
	t2.beRepaired(t1.getAttackDamage() / 2);
	t2.beRepaired(t1.getAttackDamage() / 2);
	t2.beRepaired(t1.getAttackDamage() / 2);
	std::cout << std::endl;

	std::cout << std::endl;
	t1.attack(s3);
	t2.takeDamage(t1.getAttackDamage());
	t1.attack(s3);
	t2.takeDamage(t1.getAttackDamage());
	t1.attack(s3);
	t2.takeDamage(t1.getAttackDamage());
	std::cout << std::endl;

	std::cout << std::endl;
	t2.guardGate();
	std::cout << std::endl;
	return (0);
}