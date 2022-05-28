/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:51:32 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/28 17:40:06 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {
	std::cout << "DiamondTrap default constructor" << std::endl;
	this->FragTrap::setDefaultHitPoint();
	this->ScavTrap::setDefaultEnergyPoint();
	this->FragTrap::setDefaultAttackDamage();
	return ;
}

DiamondTrap::DiamondTrap(std::string const& name) {
	std::cout << "DiamondTrap constructor by name" << std::endl;
	this->name_ = name;
	this->setName(name + "_clap_name");
	this->FragTrap::setDefaultHitPoint();
	this->ScavTrap::setDefaultEnergyPoint();
	this->FragTrap::setDefaultAttackDamage();
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const& diamondtrap): 
ClapTrap(diamondtrap), FragTrap(diamondtrap), ScavTrap(diamondtrap) {
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
	this->name_ = diamondtrap.name_;
	this->setHitPoint(diamondtrap.getHitPoint());
	this->setEnergyPoint(diamondtrap.getEnergyPoint());
	this->setAttackDamage(diamondtrap.getAttackDamage());
	return (*this);
}

void	DiamondTrap::whoAmi(void) const {
	std::cout << "ClapTrap::getName = " << this->getName() << std::endl;
	std::cout << "DiamondTrap name = " << this->name_ << std::endl;
}
