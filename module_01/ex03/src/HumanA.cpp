/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 23:05:01 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/18 23:15:00 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): name_(name), weapon_(weapon) {

	return ;
}

HumanA::~HumanA(void) {

	return ;
}

void	HumanA::attack(void) const {

			std::cout 	<< this->name_ << " attacks with their " 
						<< this->weapon_.getType() << std::endl;
}
