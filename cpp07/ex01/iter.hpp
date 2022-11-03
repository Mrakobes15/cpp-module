/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchelste <bchelste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:09:49 by bchelste          #+#    #+#             */
/*   Updated: 2022/01/18 12:30:28 by bchelste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template<typename T>
void outPut(const T &data)
{
	std::cout << data << std::endl;
}

template <typename T>
void iter(T *array, unsigned int n, void (*f)(const T &data))
{
	unsigned int i;
	
	i = 0;
	if (array == NULL)
		return ;
	while (i < n)
	{
		f(array[i]);
		i++;
	}
}

#endif