/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:57:09 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/31 16:07:19 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog(void) {
	std::cout << "WrongDog default constructor" << std::endl;
	this->type = std::string("WrongDog");
	return ;
}

WrongDog::WrongDog(WrongDog const& wrongdog) {
	*this = wrongdog;
	return ;
}

WrongDog::~WrongDog(void) {
	std::cout << this->type << " destructor" << std::endl;
	return ;
}

WrongDog&	WrongDog::operator=(WrongDog const& wrongdog) {
	this->type = wrongdog.type;
	return *this;
}

void	WrongDog::makeSound(void) const {
	std::cout << "Ouaf" << std::endl;
	return ;
}
