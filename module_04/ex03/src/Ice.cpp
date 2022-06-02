/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:18:45 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/02 14:04:42 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice") {
	return ;
}

Ice::Ice(Ice const& ice): AMateria("ice") {
	(void) ice;
	return ;
}

Ice::~Ice(void) {
	return ;
}

Ice&	Ice::operator=(Ice const& ice) {
	(void) ice;
	return *this;
}

AMateria*	Ice::clone(void) const {
	return (new Ice());
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
