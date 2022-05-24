/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:22:38 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/24 22:17:18 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): x_(0), y_(0) {
	return ;
}

Point::Point(float const x, float const y): x_(x), y_(y) {
	return ;
}

Point::Point(Point const& point): x_(point.getX()), y_(point.getY()){
	return ;
}

Point::~Point(void) {
	return ;
}

Point&	Point::operator=(Point const& point) {
	(void)	point;
	return *this;
}

Fixed	Point::getX(void) const {
	return (this->x_);
}

Fixed	Point::getY(void) const {
	return (this->y_);
}
