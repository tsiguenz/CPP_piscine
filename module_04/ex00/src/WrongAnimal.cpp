/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:50:33 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/02 14:43:53 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "Dog.hpp"

WrongAnimal::WrongAnimal(void): type("Undefined"){
	std::cout << "WrongAnimal default constructor" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const& wronganimal) {
	*this = wronganimal;
	return ;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor" << std::endl;
	return ;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& wronganimal) {
	this->type = wronganimal.type;
	return *this;
}

std::string	WrongAnimal::getType(void) const {
	return (this->type);
}

void	WrongAnimal::makeSound(void) const {
	std::cout << this->getType() << " can't do a sound..." << std::endl;
	return ;
}
