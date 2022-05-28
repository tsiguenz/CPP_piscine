/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:18:35 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/28 03:43:52 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	std::cout << "FragTrap default constructor" << std::endl;
	this->hitPoint_ = 100;
	this->energyPoint_ = 100;
	this->attackDamage_ = 30;
	return ;
}

FragTrap::FragTrap(std::string const& name) {
	std::cout << "FragTrap constructor by name" << std::endl;
	this->name_ = name;
	this->hitPoint_ = 100;
	this->energyPoint_ = 100;
	this->attackDamage_ = 30;
	return ;
}

FragTrap::FragTrap(FragTrap const& fragtrap): ClapTrap(fragtrap) {
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
	this->name_ = fragtrap.name_;
	this->hitPoint_ = fragtrap.hitPoint_;
	this->energyPoint_ = fragtrap.energyPoint_;
	this->attackDamage_ = fragtrap.attackDamage_;
	return *this;
}

void	FragTrap::highFivesGuys(void) {
	if (this->energyPoint_ <= 0 || this->hitPoint_ <= 0) {
		std::cout << "FragTrap " << this->name_ << " can't high five, he is dead" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->name_ << " want to high five " << std::endl;
	return ;
}
