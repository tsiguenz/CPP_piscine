/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:18:35 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/31 12:14:11 by tsiguenz         ###   ########.fr       */
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

FragTrap::FragTrap(FragTrap const& fragtrap) {
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
	if (this->getEnergyPoint() <= 0 || this->getHitPoint() <= 0) {
		this->printHighFiveFail();
		return ;
	}
	this->printHighFiveSucces();
	return ;
}

void	FragTrap::printHighFiveSucces(void) {
	std::cout 	<< "FragTrap " << this->getName() 
				<< " want to high five " << std::endl;
	return ;
}

void	FragTrap::printHighFiveFail(void) {
	std::cout 	<< "FragTrap " << this->getName() 
				<< " can't high five, he is dead" << std::endl;
	return ;
}

void	FragTrap::attack(std::string const& target) {
	if (this->getEnergyPoint() <= 0 || this->getHitPoint() <= 0) {
		this->printAttackFail();
		return ;
	}
	this->printAttackSucces(target);
	this->setEnergyPoint(getEnergyPoint() - 1);
	return ;
}

void	FragTrap::printAttackSucces(std::string const target) const {
	std::cout 	<< "FragTrap " << this->getName() << " attacks " << target
				<< " causing " << this->getAttackDamage() << " point of damage"
				<< std::endl;
}

void	FragTrap::printAttackFail(void) const {
	std::cout 	<< "FragTrap " << this->getName() << " can't attack, he is dead"
				<< std::endl;
	return ;
}
