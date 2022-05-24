/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:18:59 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/24 23:03:32 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

void	test(int const val1, int const val2, std::string const str) {
	if (val1 == val2) {
		std::cout << GREEN << "[OK] " << str << RESET << std::endl;
	}
	else {
		std::cout << RED << "[KO] " << str << RESET << std::endl;
		std::cout << RED << "val1 is : " << val1 << RESET << std::endl;
	}
}

int	main(void) {
	Point	a1(0, 0);
	Point	b1(0, 10);
	Point	c1(10, 0);
	Point	p1(30, 30);
	Point	p2(5, 5);
	Point	p3(2.5f, 1.25f);
	Point	p4(-2.5f, -1.25f);

	test(bsp(a1, b1, c1, p1), 0, "Point p1 is not in triangle");
	test(bsp(a1, b1, c1, p2), 1, "Point p2 is in triangle");
	test(bsp(a1, b1, c1, p3), 1, "Point p3 is in triangle");
	test(bsp(a1, b1, c1, p4), 0, "Point p4 is not in triangle");
	return (0);
}
