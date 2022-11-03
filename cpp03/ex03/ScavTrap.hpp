/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 12:54:08 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/01 13:01:28 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap : public virtual ClapTrap
{
	public:
		// Constructors
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);

		// Destructor
		virtual	~ScavTrap();
		
		// Operators
		ScavTrap & operator=(const ScavTrap &assign);

		void attack(const std::string& target);
		void guardGate();
		
	protected:
		ScavTrap();	
};

#endif
