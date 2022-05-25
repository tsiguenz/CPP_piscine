/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:19:53 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/25 10:30:48 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void): rawBits_(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int value): rawBits_(value << this->nbBitsFractPart_) {
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->rawBits_ = roundf(value * (1 << this->nbBitsFractPart_));
	return ;
}

Fixed::Fixed(Fixed const& fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
	return ;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed&	Fixed::operator=(Fixed const& fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->rawBits_ = fixed.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const {
	return (this->rawBits_);
}

void	Fixed::setRawBits(int const raw) {
	this->rawBits_ = raw;
	return ;
}

int	Fixed::toInt(void) const {
	return (this->rawBits_ >> this->nbBitsFractPart_);
}

float	Fixed::toFloat(void) const {
	return ((float) this->rawBits_ / (float) (1 << this->nbBitsFractPart_));
}

std::ostream&	operator<<(std::ostream& os, Fixed const& fixed) {
	os << fixed.toFloat();
	return (os);
}
