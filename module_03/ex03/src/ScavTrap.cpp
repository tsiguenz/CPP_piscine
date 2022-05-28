/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:52:46 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/28 03:52:37 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	std::cout << "ScavTrap default constructor" << std::endl;
	this->hitPoint_ = 100;
	this->energyPoint_ = 50;
	this->attackDamage_ = 20;
	return ;
}

ScavTrap::ScavTrap(std::string const& name) {
	std::cout << "ScavTrap constructor by name" << std::endl;
	this->name_ = name;
	this->hitPoint_ = 100;
	this->energyPoint_ = 50;
	this->attackDamage_ = 20;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const& scavtrap): ClapTrap(scavtrap) {
	std::cout << "ScavTrap copy constructor" << std::endl;
	*this = scavtrap;
	return ;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor" << std::endl;
	return ;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const& scavtrap) {
	std::cout << "ScavTrap overload assigment" << std::endl;
	this->name_ = scavtrap.name_;
	this->hitPoint_ = scavtrap.hitPoint_;
	this->energyPoint_ = scavtrap.energyPoint_;
	this->attackDamage_ = scavtrap.attackDamage_;
	return *this;
}

void	ScavTrap::printAttackSucces(std::string const target) const {
	std::cout 	<< "ScavTrap " << this->name_ << " attacks " << target
				<< " causing " << this->attackDamage_ << " point of damage"
				<< std::endl;
}

void	ScavTrap::printAttackFail(void) const {
	std::cout 	<< "ScavTrap " << this->name_ << " can't attack, he is dead"
				<< std::endl;
	return ;
}

void	ScavTrap::guardGate(void) {
	if (this->hitPoint_ <= 0 || this->energyPoint_ <= 0) {
		this->printGuardGateFail();
		return ;
	}
	this->printGuardGateSucces();
	return ;
}

void	ScavTrap::printGuardGateSucces(void) const {
	std::cout	<< "ScavTrap " << this->name_ << " enter in Gate Keeper mode"
				<< std::endl;
	return ;
}

void	ScavTrap::printGuardGateFail(void) const {
	std::cout	<< "ScavTrap " << this->name_ << " can't enter in Gate Keeper mode, "
				<< "he is dead" << std::endl;
	return ;
}
