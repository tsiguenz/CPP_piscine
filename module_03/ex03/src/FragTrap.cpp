/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:18:35 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/31 11:48:59 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#define DEFAULT_HIT_POINT 100
#define DEFAULT_ENERGY_POINT 100
#define DEFAULT_ATTACK_DAMAGE 30

FragTrap::FragTrap(void) {
	std::cout << "FragTrap default constructor" << std::endl;
	this->setHitPoint(DEFAULT_HIT_POINT);
	this->setEnergyPoint(DEFAULT_ENERGY_POINT);
	this->setAttackDamage(DEFAULT_ATTACK_DAMAGE);
	return ;
}

FragTrap::FragTrap(std::string const& name) {
	std::cout << "FragTrap constructor by name" << std::endl;
	this->setName(name);
	this->setHitPoint(DEFAULT_HIT_POINT);
	this->setEnergyPoint(DEFAULT_ENERGY_POINT);
	this->setAttackDamage(DEFAULT_ATTACK_DAMAGE);
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
	this->setHitPoint(DEFAULT_HIT_POINT);
	return ;
}

void	FragTrap::setDefaultAttackDamage(void) {
	this->setAttackDamage(DEFAULT_ATTACK_DAMAGE);
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
