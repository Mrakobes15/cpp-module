/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crendeha <crendeha@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:48:34 by crendeha          #+#    #+#             */
/*   Updated: 2022/01/23 21:07:41 by crendeha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <limits>
#include <cmath>

#define POS_INFINITY_CHECK this->_input == std::numeric_limits<double>::infinity()
#define NEG_INFINITY_CHECK this->_input == -std::numeric_limits<double>::infinity()
#define NAN_CHECK std::isnan(this->_input)

class Conversion {
public:
    Conversion(const double& input);
    Conversion(const Conversion& src);
    ~Conversion();

    Conversion& operator=(const Conversion& rhs);

    void convertToChar(void) const;
    void convertToInt(void) const;
    void convertToFloat(void) const;
    void convertToDouble(void) const;

private:
    Conversion();
    double _input;
};

#endif