/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:19:01 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/01 18:41:35 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) {
	this->type = "cure";
	return ;
}

Cure::Cure(Cure const& cure) {
	*this = cure;
	return ;
}

Cure::~Cure(void) {
	return ;
}

Cure&	Cure::operator=(Cure const& cure) {
	this->type = cure.type;
	return *this;
}

AMateria*	Cure::clone(void)const {
	return (new Cure(*this));
}
void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}
