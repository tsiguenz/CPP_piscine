/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:31:01 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/26 10:44:33 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Point.hpp"
#include "Fixed.hpp"

bool	areCollinear(Point const a, Point const b, Point const c) {
	return ((b.getY() - a.getY()) / (b.getX() - a.getX())
			== (c.getY() - a.getY()) / (c.getX() - a.getX()));
}

Fixed const	area(Point const a, Point const b, Point const c) {
	Fixed	ret = (((a.getX() * (b.getY() - c.getY())) +
					(b.getX() * (c.getY() - a.getY())) +
					(c.getX() * (a.getY() - b.getY()))) / 2);

	return (Fixed::abs(ret));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	if (areCollinear(a, b, point) || areCollinear(a, c, point) || areCollinear(c, b, point))
		return (0);
	Fixed	areaABC = area(a, b, c);
	Fixed	areaPAB = area(point, a, b);
	Fixed	areaPBC = area(point, b, c);
	Fixed	areaPAC = area(point, a, c);

// debug
//	std::cout << "Px = " << point.getX() << " Py = " <<  point.getY() << std::endl;
//	std::cout << "area ABC = " << areaABC << std::endl;
//	std::cout << "area PAB = " << areaPAB << std::endl;
//	std::cout << "area PBC = " << areaPBC << std::endl;
//	std::cout << "area PAC = " << areaPAC << std::endl;
//	std::cout << "sum area with P = " << areaPAB + areaPBC + areaPAC << std::endl;
	return (areaABC == (areaPAB + areaPBC + areaPAC));
}
