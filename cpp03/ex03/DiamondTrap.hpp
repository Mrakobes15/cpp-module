/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 11:22:53 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/01 13:12:18 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
public:
	// Constructors

	DiamondTrap(const std::string &name);
	DiamondTrap(const DiamondTrap &copy);
	
	// Destructor
	~DiamondTrap();

	// Operators
	DiamondTrap	& operator=(const DiamondTrap& assign);

	// Getters / Setters
	std::string getName() const;
	void setName(std::string name);

	void	attack(const std::string &target);
	void	whoAmI(void) const;

private:
	std::string	_name;

	DiamondTrap();
};


#endif
