/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:48:32 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/18 18:20:22 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {

	return ;
}

Zombie::Zombie(std::string name): name_(name){

	return ;
}

Zombie::~Zombie(void) {

	std::cout << this->name_ << " is really dead..." << std::endl;
	return ;
}

void	Zombie::announce(void) const {

	std::cout << this->name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::setName(std::string name) {

	this->name_ = name;
	return ;
}
