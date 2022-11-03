/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbeatris <fbeatris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:03:13 by fbeatris          #+#    #+#             */
/*   Updated: 2022/01/27 16:59:11 by fbeatris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>

class AAnimal
{
	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(const AAnimal &origin);

		AAnimal&	operator=(AAnimal const &origin);

		virtual void	makeSound() const = 0;
		std::string	getType() const;
		void		setType(std::string type);
		
	protected:
		std::string	type;
};

#endif