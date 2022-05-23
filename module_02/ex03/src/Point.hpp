/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:22:38 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/23 18:51:11 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point {

public:
// Canonical elements
	Point(void);
	Point(Point const& point);
	~Point(void);
	Point& operator=(Point const& point);
// End of canonical elements
	Point(float const x, float const y);
	Fixed	getX(void) const;
	Fixed	getY(void) const;

private:
	Fixed const	x_;
	Fixed const	y_;

};

#endif // POINT_HPP
