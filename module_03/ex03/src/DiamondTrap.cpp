/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:51:32 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/28 03:54:17 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {
	std::cout << "DiamondTrap default constructor" << std::endl;
	this->hitPoint_ = FragTrap::hitPoint_;
	this->energyPoint_ = ScavTrap::energyPoint_;
	this->attackDamage_ = FragTrap::attackDamage_;
	return ;
}

DiamondTrap::DiamondTrap(std::string const& name) {
	std::cout << "DiamondTrap constructor by name" << std::endl;
	this->name_ = name;
	this->ClapTrap::name_ = name + "_clap_name";
	this->hitPoint_ = FragTrap::hitPoint_;
	this->energyPoint_ = ScavTrap::energyPoint_;
	this->attackDamage_ = FragTrap::attackDamage_;
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
	this->ClapTrap::name_ = diamondtrap.name_;
	this->name_ = diamondtrap.name_;
	this->hitPoint_ = diamondtrap.hitPoint_;
	this->energyPoint_ = diamondtrap.energyPoint_;
	this->attackDamage_ = diamondtrap.attackDamage_;
	return (*this);
}

void	DiamondTrap::whoAmi(void) {
	std::cout << "ClapTrap::getName = " << this->ClapTrap::name_ << std::endl;
	std::cout << "DiamondTrap name = " << this->name_ << std::endl;
}
