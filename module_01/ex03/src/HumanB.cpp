/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 22:41:06 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/18 23:26:01 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name_(name) {

	this->weapon_ = NULL;
	return ;
}

HumanB::~HumanB(void) {

	return ;
}

void	HumanB::setWeapon(Weapon& weapon) {

	this->weapon_ = &weapon;
}

void	HumanB::attack(void) const {

		if (this->weapon_ != NULL)
			std::cout 	<< this->name_ << " attacks with their " 
						<< this->weapon_->getType() << std::endl;
		else
			std::cout << "Can't attack without weapon..." << std::endl;
}
