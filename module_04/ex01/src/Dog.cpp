/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:57:09 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/31 18:15:53 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "Dog default constructor" << std::endl;
	this->type = std::string("Dog");
	(void) this->brain_;
	this->brain_ = new Brain();
	return ;
}

Dog::Dog(Dog const& dog) {
	*this = dog;
	return ;
}

Dog::~Dog(void) {
	std::cout << this->type << " destructor" << std::endl;
	delete this->brain_;
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

void	Dog::setIdea(int index, std::string const& idea) {
	if (index >= 100) {
		std::cerr << "Index not in range of brain (0 -> 99)" << std::endl;
		return ;
	}
	this->brain_->setIdea(index, idea);
}

std::string	Dog::getIdea(int index) const {
	return (this->brain_->getIdea(index));
}
