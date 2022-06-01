/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:18:45 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/01 18:42:18 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) {
	this->type = "ice";
	return ;
}

Ice::Ice(Ice const& ice) {
	*this = ice;
	return ;
}

Ice::~Ice(void) {
	return ;
}

Ice&	Ice::operator=(Ice const& ice) {
	this->type = ice.type;
	return *this;
}

AMateria*	Ice::clone(void) const {
	return (new Ice(*this));
}
void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
