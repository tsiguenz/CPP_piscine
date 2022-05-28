/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:18:35 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/28 17:38:43 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	std::cout << "FragTrap default constructor" << std::endl;
	this->setHitPoint(100);
	this->setEnergyPoint(100);
	this->setAttackDamage(30);
	return ;
}

FragTrap::FragTrap(std::string const& name) {
	std::cout << "FragTrap constructor by name" << std::endl;
	this->setName(name);
	this->setHitPoint(100);
	this->setEnergyPoint(100);
	this->setAttackDamage(30);
	return ;
}

FragTrap::FragTrap(FragTrap const& fragtrap): ClapTrap(fragtrap)  {
	std::cout << "FragTrap copy constructor" << std::endl;
	*this = fragtrap;
	return ;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor" << std::endl;
	return ;
}

FragTrap&	FragTrap::operator=(FragTrap const& fragtrap) {
	std::cout << "FragTrap overload assigment" << std::endl;
	this->setName(fragtrap.getName());
	this->setHitPoint(fragtrap.getHitPoint());
	this->setEnergyPoint(fragtrap.getEnergyPoint());
	this->setAttackDamage(fragtrap.getAttackDamage());
	return *this;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->getName() << " want to high five " << std::endl;
	return ;
}

void	FragTrap::setDefaultHitPoint(void) {
	this->setHitPoint(100);
	return ;
}

void	FragTrap::setDefaultAttackDamage(void) {
	this->setAttackDamage(30);
	return ;
}
