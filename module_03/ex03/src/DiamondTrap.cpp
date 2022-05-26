/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:51:32 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/26 18:02:21 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {
	std::cout << "DiamondTrap default constructor" << std::endl;
	this->setHitPoint(FragTrap::getHitPoint());
	this->setEnergyPoint(ScavTrap::getEnergyPoint());
	this->setAttackDamage(FragTrap::getAttackDamage());
	return ;
}

DiamondTrap::DiamondTrap(std::string const& name) {
	std::cout << "DiamondTrap constructor by name" << std::endl;
	this->setName(name);
	this->setHitPoint(FragTrap("").getHitPoint());
	this->setEnergyPoint(ScavTrap("").getEnergyPoint());
	this->setAttackDamage(FragTrap("").getAttackDamage());
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const& diamondtrap) {
	std::cout << "DiamondTrap copy constructor" << std::endl;
	*this = diamondtrap;
	return ;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor" << std::endl;
	return ;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const& diamondtrap) {
	std::cout << "DiamondTrap overload assigment" << std::endl;
	this->setName(diamondtrap.getName());
	this->setHitPoint(diamondtrap.getHitPoint());
	this->setEnergyPoint(diamondtrap.getEnergyPoint());
	this->setAttackDamage(diamondtrap.getAttackDamage());
	return *this;
}
