/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchelste <bchelste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:09:46 by bchelste          #+#    #+#             */
/*   Updated: 2022/01/22 12:45:39 by bchelste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int test_1[] = {4, 8, 15, 16, 23, 42};
	
	iter(test_1, 6, outPut);
	std::cout << "------------" << std::endl;

	std::string test_2[] = {"one", "two", "three", "four", "five"};

	iter(test_2, 5, outPut);
	std::cout << "------------" << std::endl;
}


/*
class Awesome
{
	public:
		Awesome( void ): _n(42) {return;}
		int get(void) const { return this->_n;}
	private:
		int _n;
};

std::ostream & operator<<(std::ostream & o, Awesome const &rhs) { o << rhs.get(); return o;}
template< typename T >
void print(T const & x) { std::cout << x << std::endl; return; }

int main()
{
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];

	iter( tab, 5, print );
	iter( tab2, 5, print );

	return 0;
}
*/