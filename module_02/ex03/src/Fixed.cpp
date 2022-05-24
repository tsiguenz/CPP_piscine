/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:19:53 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/24 23:05:05 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void): rawBits_(0) {
	return ;
}

Fixed::Fixed(const int value): rawBits_(value << this->nbBitsFractPart_) {
	return ;
}

Fixed::Fixed(const float value) {
	this->rawBits_ = roundf(value * (1 << this->nbBitsFractPart_));
	return ;
}

Fixed::Fixed(Fixed const& fixed) {
	*this = fixed;
	return ;
}

Fixed::~Fixed(void) {
	return ;
}

Fixed&	Fixed::operator=(Fixed const& fixed) {
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

bool	Fixed::operator<(Fixed const& fixed) const {
	return (this->getRawBits() < fixed.getRawBits());
}

bool	Fixed::operator>(Fixed const& fixed) const {
	return (this->getRawBits() > fixed.getRawBits());
}

bool	Fixed::operator<=(Fixed const& fixed) const {
	return (this->getRawBits() <= fixed.getRawBits());
}

bool	Fixed::operator>=(Fixed const& fixed) const {
	return (this->getRawBits() >= fixed.getRawBits());
}

bool	Fixed::operator==(Fixed const& fixed) const {
	return (this->getRawBits() == fixed.getRawBits());
}

bool	Fixed::operator!=(Fixed const& fixed) const {
	return (this->getRawBits() != fixed.getRawBits());
}

Fixed	Fixed::operator+(Fixed const& fixed) const {
	return (this->toFloat() + fixed.toFloat());
}

Fixed	Fixed::operator-(Fixed const& fixed) const {
	return (this->toFloat() - fixed.toFloat());
}

Fixed	Fixed::operator*(Fixed const& fixed) const {
	return (this->toFloat() * fixed.toFloat());
}

Fixed	Fixed::operator/(Fixed const& fixed) const {
	return (this->toFloat() / fixed.toFloat());
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp;

	tmp.rawBits_ = this->rawBits_++;
	return (tmp);
}

Fixed&	Fixed::operator++(void) {
	this->rawBits_++;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp;

	tmp.rawBits_ = this->rawBits_--;
	return (tmp);
}

Fixed&	Fixed::operator--(void) {
	this->rawBits_--;
	return (*this);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b) {
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b) {
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed const&	Fixed::min(Fixed const& a, Fixed const& b) {
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed const&	Fixed::max(Fixed const& a, Fixed const& b) {
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed	Fixed::abs(Fixed const& fixed) {
	return ((fixed.toInt() < 0)? fixed * -1 : fixed);
}
