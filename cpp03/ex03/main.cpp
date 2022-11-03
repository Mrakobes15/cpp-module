/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 15:58:20 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/01 13:19:24 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	std::string s = "Senya";
	DiamondTrap d(s);

	std::cout << std::endl;
	d.whoAmI();
	std::cout << std::endl;

	std::cout << "Hp is " << d.getHp() << std::endl;;
	std::cout << std::endl;

	std::cout << "Energy is " << d.getEnergy() << std::endl;;
	std::cout << std::endl;

	std::cout << "Attack Damage is " << d.getAttackDamage() << std::endl;;
	std::cout << std::endl;

	std::cout << std::endl;
	d.attack(s);
	std::cout << std::endl;

	DiamondTrap b(d);
	b.setName("Petya");
	b.ClapTrap::setName("Petya_clap_name");

	std::cout << std::endl;
	b.whoAmI();
	std::cout << std::endl;

	std::cout << std::endl;
	b.guardGate();
	std::cout << std::endl;

	std::cout << std::endl;
	b.highFivesGuys();
	std::cout << std::endl;
	return 0;
}