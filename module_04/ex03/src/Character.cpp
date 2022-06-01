/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:31:07 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/01 18:01:07 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {
	(void) inventory_;
	return ;
}

Character::Character(std::string const& name) {
	this->name_ = name;
	return ;
}

Character::Character(Character const& character) {
	*this = character;
	return ;
}

Character::~Character(void) {
	return ;
}

Character&	Character::operator=(Character const& character) {
	this->name_ = character.name_;
	return *this;
}

std::string const&	Character::getName(void) const {
	return (this->name_);
}

void	Character::equip(AMateria* m) {
	(void) m;
	return ;
}
void	Character::unequip(int idx) {
	(void) idx;
	return ;
}

void	Character::use(int idx, ICharacter& target) {
	(void) idx;
	(void) target;
	return ;
}
