/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:19:53 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/22 18:47:52 by tsiguenz         ###   ########.fr       */
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
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	int					value_;
	static int const	nbBits_ = 8;
};

#endif // FIXED_HPP
