/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:19:01 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/02 14:04:36 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria("cure") {
	return ;
}

Cure::Cure(Cure const& cure): AMateria("cure") {
	(void) cure;
	return ;
}

Cure::~Cure(void) {
	return ;
}

Cure&	Cure::operator=(Cure const& cure) {
	(void) cure;
	return *this;
}

AMateria*	Cure::clone(void)const {
	return (new Cure());
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}
