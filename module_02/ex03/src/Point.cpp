/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:22:38 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/23 18:55:10 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): x_(0), y_(0) {
	return ;
}

Point::Point(float const x, float const y): x_(Fixed(x)), y_(Fixed(y)) {
	return ;
}

Point::Point(Point const& point) {
	*this = point;
	return ;
}

Point::~Point(void) {
	return ;
}

Point&	Point::operator=(Point const& point) {
	this->x_ = point.getX();
	this->y_ = point.getY();
	return *this;
}

Fixed	Point::getX(void) const {
	return (this->x_);
}

Fixed	Point::getY(void) const {
	return (this->y_);
}
