/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:52:46 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/31 11:49:18 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#define DEFAULT_HIT_POINT 100
#define DEFAULT_ENERGY_POINT 50
#define DEFAULT_ATTACK_DAMAGE 20

ScavTrap::ScavTrap(void) {
	std::cout << "ScavTrap default constructor" << std::endl;
	this->setHitPoint(DEFAULT_HIT_POINT);
	this->setEnergyPoint(DEFAULT_ENERGY_POINT);
	this->setAttackDamage(DEFAULT_ATTACK_DAMAGE);
	return ;
}

ScavTrap::ScavTrap(std::string const& name) {
	std::cout << "ScavTrap constructor by name" << std::endl;
	this->setName(name);
	this->setHitPoint(DEFAULT_HIT_POINT);
	this->setEnergyPoint(DEFAULT_ENERGY_POINT);
	this->setAttackDamage(DEFAULT_ATTACK_DAMAGE);
	return ;
}

ScavTrap::ScavTrap(ScavTrap const& scavtrap) {
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
	this->setName(scavtrap.getName());
	this->setHitPoint(scavtrap.getHitPoint());
	this->setEnergyPoint(scavtrap.getEnergyPoint());
	this->setAttackDamage(scavtrap.getAttackDamage());
	return *this;
}

void	ScavTrap::printAttackSucces(std::string const target) const {
	std::cout 	<< "ScavTrap " << this->getName() << " attacks " << target
				<< " causing " << this->getAttackDamage() << " point of damage"
				<< std::endl;
}

void	ScavTrap::printAttackFail(void) const {
	std::cout 	<< "ScavTrap " << this->getName() << " can't attack, he is dead"
				<< std::endl;
	return ;
}

void	ScavTrap::guardGate(void) {
	if (this->getHitPoint() <= 0 || this->getEnergyPoint() <= 0) {
		this->printGuardGateFail();
		return ;
	}
	this->printGuardGateSucces();
	return ;
}

void	ScavTrap::printGuardGateSucces(void) const {
	std::cout	<< "ScavTrap " << this->getName() << " enter in Gate Keeper mode"
				<< std::endl;
	return ;
}

void	ScavTrap::printGuardGateFail(void) const {
	std::cout	<< "ScavTrap " << this->getName() << " can't enter in Gate Keeper mode, "
				<< "he is dead" << std::endl;
	return ;
}

void	ScavTrap::setDefaultEnergyPoint(void) {
	this->setEnergyPoint(DEFAULT_ENERGY_POINT);
	return ;
}

void	ScavTrap::attack(std::string const& target) {
	if (this->getEnergyPoint() <= 0 || this->getHitPoint() <= 0) {
		this->printAttackFail();
		return ;
	}
	this->printAttackSucces(target);
	this->setEnergyPoint(getEnergyPoint() - 1);
	return ;
}
