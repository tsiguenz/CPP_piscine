/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:52:46 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/26 13:24:06 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	std::cout << "ScavTrap default constructor" << std::endl;
	this->setHitPoint(100);
	this->setEnergyPoint(50);
	this->setAttackDamage(20);
	return ;
}

ScavTrap::ScavTrap(std::string const& name) {
	std::cout << "ScavTrap constructor by name" << std::endl;
	this->setName(name);
	this->setHitPoint(100);
	this->setEnergyPoint(50);
	this->setAttackDamage(20);
	return ;
}

ScavTrap::ScavTrap(ScavTrap const& scavtrap) {
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
	std::cout 	<< "ScavTrap " << this->getName() << " enter in Gate Keeper mode";
	return ;
}
