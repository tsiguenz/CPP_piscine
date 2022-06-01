/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:50:33 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/01 11:56:22 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"

AAnimal::AAnimal(void): type(std::string("Undefined")){
	std::cout << "AAnimal default constructor" << std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const& animal) {
	std::cout << "AAnimal copy constructor" << std::endl;
	*this = animal;
	return ;
}

AAnimal::~AAnimal(void) {
	std::cout << "AAnimal destructor" << std::endl;
	return ;
}

AAnimal&	AAnimal::operator=(AAnimal const& animal) {
	this->type = animal.type;
	return *this;
}

std::string	AAnimal::getType(void) const {
	return (this->type);
}

void	AAnimal::makeSound(void) const {
	std::cout << this->getType() << " can't do a sound..." << std::endl;
	return ;
}
