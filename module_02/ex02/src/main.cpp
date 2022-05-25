/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:18:59 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/25 10:12:58 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

void	test(int const val1, int const val2, std::string const str) {
	if (val1 == val2) {
		std::cout << GREEN << "[OK] " << str << RESET << std::endl;
	}
	else {
		std::cout << RED << "[KO] " << str << RESET << std::endl;
		std::cout << RED << "res is : " << val1 << RESET << std::endl;
	}
}

void	test(Fixed const val1, float const val2, std::string const str) {
	if (val1 == val2) {
		std::cout << GREEN << "[OK] " << str << RESET << std::endl;
	}
	else {
		std::cout << RED << "[KO] " << str << RESET << std::endl;
		std::cout << RED << "res is : " << val1 << RESET << std::endl;
	}
}

int	main(void) {
	Fixed	f1, f2;
	f1 = f2 = (2.225f + 7.775f + 10 - 10) * 1.5f / 3;

	std::cout << "My tests :" << std::endl << std::endl;

	test(Fixed(-0.1f) < Fixed(0.1f), 1, "-0.1 < 0.1 == true");
	test(Fixed(-0.1f) > Fixed(0.1f), 0, "-0.1 > 0.1 == false");
	test(Fixed(42) <= Fixed(4.2f), 0, "42 <= 4.2f == false");
	test(Fixed(42) >= Fixed(4.2f), 1, "42 >= 4.2f == true");
	test(Fixed(42) == Fixed(42.0f), 1, "42 == 42.0f == true");
	test(Fixed(42) != Fixed(42.0f), 0, "42 != 42.0f == false");

	test(Fixed(5.5f) + Fixed(2), 7.5f, "5.5 + 2 == 7.5");
	test(Fixed(5.5f) - Fixed(2), 3.5f, "5.5 - 2 == 3.5");
	test(Fixed(5.5f) * Fixed(2), 11.f, "5.5 * 2 == 11");
	test(Fixed(5.5f) / Fixed(2), 2.75, "5.5 / 2 == 2.75");

	test(Fixed::min(Fixed(5.5f), Fixed(2)), 2.0f, "min(5.5, 2) == 2");
	test(Fixed::min(Fixed(2), Fixed(2)), 2.0f, "min(5.5, 2) == 2");
	test(Fixed::max(Fixed(5.5f), Fixed(2)), 5.5f, "min(5.5, 2) == 5.5");
	test(Fixed::max(Fixed(5.5f), Fixed(5.5f)), 5.5f, "min(5.5, 2) == 5.5");

	test(f1, 5, "f1 = 5");
	test(f2, 5, "f2 = 5");

	std::cout << std::endl << "Subject tests :" << std::endl << std::endl;

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return (0);
}
