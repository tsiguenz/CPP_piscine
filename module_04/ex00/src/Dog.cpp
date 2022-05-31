/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:57:09 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/31 15:37:22 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "Dog default constructor" << std::endl;
	this->type = std::string("Dog");
	return ;
}

Dog::Dog(Dog const& dog) {
	*this = dog;
	return ;
}

Dog::~Dog(void) {
	std::cout << this->type << " destructor" << std::endl;
	return ;
}

Dog&	Dog::operator=(Dog const& dog) {
	this->type = dog.type;
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "Ouaf" << std::endl;
	return ;
}
