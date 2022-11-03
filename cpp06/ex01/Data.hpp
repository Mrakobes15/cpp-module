/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crendeha <crendeha@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 21:28:47 by crendeha          #+#    #+#             */
/*   Updated: 2022/01/23 21:46:51 by crendeha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <cstdint>

class Data
{
public:
	Data(const std::string &input);
	Data(const Data &src);
	~Data();

	Data &operator=(const Data &rhs);

	std::string getSecret() const;

private:
	Data();
	std::string _secret;
};

#endif