/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:18:59 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/25 14:21:26 by tsiguenz         ###   ########.fr       */
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
	Point	a1;
	Point	b1(10, 0);
	Point	c1(0, 10);
	Point	p1(30, 30);
	Point	p2(5, 5);
	Point	p3(2.5f, 1.25f);
	Point	p4(-2.5f, -1.25f);
	Point	p5(0, 10);
	Point	p6(11, 0);
	Point	p7(1, 1);
	Point	p8(p7);

	test(bsp(a1, b1, c1, p1), 0, "P1 is not in the triangle");
	test(bsp(a1, b1, c1, p2), 0, "P2 is not in the triangle");
	test(bsp(a1, b1, c1, p3), 1, "P3 is in the triangle");
	test(bsp(a1, b1, c1, p4), 0, "P4 is not in the triangle");
	test(bsp(a1, b1, c1, p5), 0, "P5 is not in the triangle");
	test(bsp(a1, b1, c1, p6), 0, "P6 is not in the triangle");
	test(bsp(a1, b1, c1, p7), 1, "P7 is in the triangle");
	test(bsp(a1, b1, c1, p8), 1, "P8 is in the triangle (copy constructor)");
	return (0);
}
