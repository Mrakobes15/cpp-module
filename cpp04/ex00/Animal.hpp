/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbeatris <fbeatris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:03:13 by fbeatris          #+#    #+#             */
/*   Updated: 2022/01/27 16:59:11 by fbeatris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &origin);

		Animal&	operator=(Animal const &origin);

		virtual void	makeSound() const;
		std::string	getType() const;
		
	protected:
		std::string	type;
};

#endif