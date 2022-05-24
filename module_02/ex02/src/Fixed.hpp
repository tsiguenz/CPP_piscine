/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:19:53 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/24 20:48:53 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

public:
	// Canonical elements
	Fixed(void);
	Fixed(Fixed const& fixed);
	~Fixed(void);
	Fixed& operator=(Fixed const& fixed);
	// End of canonical elements
	Fixed(const int value);
	Fixed(const float value);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt(void) const;
	float	toFloat(void) const;

	bool	operator<(Fixed const& fixed) const;
	bool	operator>(Fixed const& fixed) const;
	bool	operator>=(Fixed const& fixed) const;
	bool	operator<=(Fixed const& fixed) const;
	bool	operator==(Fixed const& fixed) const;
	bool	operator!=(Fixed const& fixed) const;
	Fixed	operator+(Fixed const& fixed) const;
	Fixed	operator-(Fixed const& fixed) const;
	Fixed	operator*(Fixed const& fixed) const;
	Fixed	operator/(Fixed const& fixed) const;
	Fixed	operator++(int);
	Fixed&	operator++(void);
	Fixed	operator--(int);
	Fixed&	operator--(void);

	static Fixed&	min(Fixed& a, Fixed& b);
	static Fixed&	max(Fixed& a, Fixed& b);
	static Fixed const&	min(Fixed const& a, Fixed const& b);
	static Fixed const&	max(Fixed const& a, Fixed const& b);

private:
	int					rawBits_;
	static int const	nbBitsFractPart_ = 8;
};

std::ostream&	operator<<(std::ostream& os, Fixed const& fixed);

#endif // FIXED_HPP
