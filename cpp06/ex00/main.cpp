/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crendeha <crendeha@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:47:49 by crendeha          #+#    #+#             */
/*   Updated: 2022/01/23 22:08:11 by crendeha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "Error: wrong number of arguments" << std::endl;
	else
	{
		Conversion conversion = Conversion(std::atof(argv[1]));
		conversion.convertToChar();
		conversion.convertToInt();
		conversion.convertToFloat();
		conversion.convertToDouble();
	}
	return 0;
}