/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:18:59 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/23 18:38:28 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
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

void	test(float const val1, float const val2, std::string const str) {
	if (val1 == val2) {
		std::cout << GREEN << "[OK] " << str << RESET << std::endl;
	}
	else {
		std::cout << RED << "[KO] " << str << RESET << std::endl;
		std::cout << RED << "res is : " << val1 << RESET << std::endl;
	}
}

int	main(void) {
	Point	a(1.0f, 2.0f);

	std::cout << a.getX() << std::endl;
	return (0);
}
