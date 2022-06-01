/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:03:45 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/01 18:19:46 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {
	return ;
}

AMateria::AMateria(std::string const& type) {
	this->type = type;
	return ;
}

AMateria::AMateria(AMateria const& amateria) {
	*this = amateria;
	return ;
}

AMateria::~AMateria(void) {
	return ;
}

AMateria&	AMateria::operator=(AMateria const& amateria) {
	this->type = amateria.type;
	return (*this);
}

std::string const&	AMateria::getType(void) const {
	return (this->type);
}

void	AMateria::use(ICharacter& target) {
	(void) target;
	std::cout << "Can't use an AMateria" << std::endl;
	return ;
}
