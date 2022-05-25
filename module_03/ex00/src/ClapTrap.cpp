/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:00:14 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/25 19:07:47 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	return ;
}

ClapTrap::ClapTrap(std::string const& name): 	name_(name), hitPoint_(10), 
												energyPoint_(10), attackDamage_(0) {
	std::cout << "constructor by name" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const& claptrap) {
	*this = claptrap;
	return ;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "destructor" << std::endl;
	return ;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const& claptrap) {
	(void) claptrap;
	return *this;
}

std::string	ClapTrap::getName(void) {
	return (this->name_);
}

int	ClapTrap::getHitPoint(void) {
	return (this->hitPoint_);
}

int	ClapTrap::getEnergyPoint(void) {
	return (this->energyPoint_);
}

int	ClapTrap::getAttackDamage(void) {
	return (this->attackDamage_);
}

void	ClapTrap::attack(std::string const& target) {
	if (this->energyPoint_ <= 0 || this->hitPoint_ <= 0) {
		this->printAttackFail();
		return ;
	}
	this->printAttackSucces(target);
	this->energyPoint_--;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->energyPoint_ <= 0 || this->hitPoint_ <= 0) {
		this->printTakeDamageFail();
		return ;
	}
	this->printTakeDamageSucces(amount);
	this->hitPoint_ -= amount;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->energyPoint_ <= 0 || this->hitPoint_ <= 0) {
		this->printRepairedFail();
		return ;
	}
	this->hitPoint_ += amount;
	this->printRepairedSucces(amount);
	this->energyPoint_--;
	return ;
}

void	ClapTrap::printAttackSucces(std::string const target) const {
	std::cout 	<< "ClapTrap " << this->name_ << " attacks " << target
				<< " causing " << this->attackDamage_ << " point of damage"
				<< std::endl;
}

void	ClapTrap::printAttackFail(void) const {
	std::cout 	<< "ClapTrap " << this->name_ << " can't attack, he is dead"
				<< std::endl;
	return ;
}

void	ClapTrap::printTakeDamageSucces(unsigned int const amount) const {
	std::cout 	<< "ClapTrap " << this->name_ << " take " << amount
				<< " damage" << std::endl;
	return ;
}

void	ClapTrap::printTakeDamageFail(void) const {
	std::cout 	<< "ClapTrap " << this->name_ << " can't take damage, he is dead"
				<< std::endl;
	return ;
}
void	ClapTrap::printRepairedSucces(unsigned int const amount) const {
	std::cout 	<< "ClapTrap " << this->name_ << " is repaired by "
				<< amount << std::endl;
	return ;
}

void	ClapTrap::printRepairedFail(void) const {
	std::cout 	<< "ClapTrap " << this->name_ << " can't repaired, he is dead"
				<< std::endl;
	return ;
}
