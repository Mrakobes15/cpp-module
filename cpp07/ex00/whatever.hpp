/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchelste <bchelste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:28:00 by bchelste          #+#    #+#             */
/*   Updated: 2022/01/18 11:52:32 by bchelste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T &x, T &y)
{
	T	tmp;

	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
const T	&min(const T &x, const T &y)
{
	if (x < y)
		return (x);
	else
		return (y);
}

template <typename T>
const T &max(const T &x, const T &y)
{
	if (x > y)
		return (x);
	else
		return (y);
}

#endif