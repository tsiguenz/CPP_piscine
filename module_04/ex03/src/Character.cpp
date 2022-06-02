/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:31:07 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/02 14:00:38 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void): inventory_(), nbMateria_(0){
	return ;
}

Character::Character(std::string const& name): inventory_(), nbMateria_(0) {
	this->name_ = name;
	return ;
}

Character::Character(Character const& character) {
	*this = character;
	return ;
}

Character::~Character(void) {
	if (this->nbMateria_ > 0) {
		for (int i = 0; i < 4; i++)
			delete this->inventory_[i];
	}
}

Character&	Character::operator=(Character const& character) {
	if (this->nbMateria_ > 0) {
		for (int i = 0; i < 4; i++)
			delete this->inventory_[i];
	}
	this->name_ = character.name_;
	for (int i = 0; i < 4; i++)
		this->inventory_[i] = character.inventory_[i]->clone();
	this->nbMateria_ = character.nbMateria_;
	return *this;
}

std::string const&	Character::getName(void) const {
	return (this->name_);
}

void	Character::equip(AMateria* m) {
	if (m == NULL) {
		std::cerr << "Can't equip materia, materia is NULL" << std::endl;
		return ;
	}
	if (this->nbMateria_ == 4) {
		std::cerr << "Can't equip new materia, inventory is full" << std::endl;
		delete m;
		return ;
	}
	for (int i = 0; i < 4; i++) {
		if (this->inventory_[i] == NULL) {
			this->inventory_[i] = m;
			break ;
		}
	}
	this->nbMateria_++;
	return ;
}
void	Character::unequip(int idx) {
	if (idx < 0 || idx >= 4 || this->nbMateria_ == 0) {
		std::cerr << "Can't unequip, there is no materia at this index" << std::endl;
		return ;
	}
	this->inventory_[idx] = NULL;
	this->nbMateria_--;
	return ;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 4 || this->inventory_[idx] == NULL) {
		std::cerr << "Can't use, there is no materia at this index" << std::endl;
		return ;
	}
	this->inventory_[idx]->use(target);
	return ;
}
