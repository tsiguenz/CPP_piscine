/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:00:14 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/26 16:06:35 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): name_(""), hitPoint_(10), energyPoint_(10), attackDamage_(0) {
	std::cout << "default constructor" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string const& name): 	name_(name), hitPoint_(10), 
												energyPoint_(10), attackDamage_(0) {
	std::cout << "constructor by name" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const& claptrap) {
	std::cout << "constructor by copy" << std::endl;
	*this = claptrap;
	return ;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "destructor" << std::endl;
	return ;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const& claptrap) {
	std::cout << "overload assigment" << std::endl;
	this->name_ = claptrap.getName();
	this->hitPoint_ = claptrap.getHitPoint();
	this->energyPoint_ = claptrap.getEnergyPoint();
	this->attackDamage_ = claptrap.getAttackDamage();
	return *this;
}

std::string	ClapTrap::getName(void) const {
	return (this->name_);
}

int	ClapTrap::getHitPoint(void) const {
	return (this->hitPoint_);
}

int	ClapTrap::getEnergyPoint(void) const {
	return (this->energyPoint_);
}

int	ClapTrap::getAttackDamage(void) const {
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

std::ostream&	operator<<(std::ostream& os, ClapTrap const& claptrap) {
	os << "name : " << claptrap.getName();
	os << ", HP : " << claptrap.getHitPoint();
	os << ", EP : " << claptrap.getEnergyPoint();
	os << ", AD : " << claptrap.getAttackDamage();
	return os;
}
