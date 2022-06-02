/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:50:33 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/02 14:53:31 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Animal::Animal(void): type("Undefined"){
	std::cout << "Animal default constructor" << std::endl;
	return ;
}

Animal::Animal(Animal const& animal) {
	std::cout << "Animal copy constructor" << std::endl;
	*this = animal;
	return ;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor" << std::endl;
	return ;
}

Animal&	Animal::operator=(Animal const& animal) {
	this->type = animal.type;
	return *this;
}

std::string	Animal::getType(void) const {
	return (this->type);
}

void	Animal::makeSound(void) const {
	std::cout << this->getType() << " can't do a sound..." << std::endl;
	return ;
}

void	Animal::setIdea(int index, std::string const& idea) {
	std::cout << "An animal can't set an idea" << std::endl;
	(void) index;
	(void) idea;
	return ;
}
std::string	Animal::getIdea(int index) const {
	std::cout << "An animal can't get an idea" << std::endl;
	(void) index;
	return ("");
}
