/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchelste <bchelste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:14:52 by bchelste          #+#    #+#             */
/*   Updated: 2022/01/18 15:11:41 by bchelste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template <typename T>
class Array
{
	private:
		T	*arr;
		unsigned int nbr;
		
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &data);
		~Array();

		Array	&operator=(const Array &data);
		T		&operator[](unsigned int n);
		
		unsigned int size() const;
};

template <typename T>
Array<T>::Array()
{
	this->arr = new T[0];
	this->nbr = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	unsigned int i;

	i = 0;
	this->nbr = n;
	this->arr = new T[this->nbr];
	while (i < this->nbr)
	{
		this->arr[i] = 0;
		i++;
	}
}

template <typename T>
Array<T>::Array(const Array &data)
{
	this->arr = 0;
	*this = data;
}

template <typename T>
Array<T>::~Array()
{
	if (this->arr)
		delete [] this->arr;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &data)
{
	unsigned int i;
	
	i = 0;
	if ((this->nbr > 0) || (this->arr))
		delete [] this->arr;
	this->nbr = data.size();
	this->arr = new T[data.size()];
	while (i < data.size())
	{
		this->arr[i] = data.arr[i];
		i++;
	}
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](unsigned int n)
{
	if ((n >= this->nbr) || (n < 0))
		throw std::exception();
	return (this->arr[n]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (this->nbr);
}

#endif