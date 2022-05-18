/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:15:44 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/18 19:28:21 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type_(type) {

	return ;
}

Weapon::~Weapon(void) {

	return ;
}

std::string const&	Weapon::getType(void) const {

	return (this->type_);
}

void	Weapon::setType(std::string type) {

	this->type_ = type;
	return ;
}
