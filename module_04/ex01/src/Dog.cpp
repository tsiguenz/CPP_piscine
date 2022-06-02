/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:57:09 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/02 15:02:23 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "Dog default constructor" << std::endl;
	this->type = "Dog";
	this->brain_ = new Brain();
	return ;
}

Dog::Dog(Dog const& dog) {
	std::cout << "Dog copy constructor" << std::endl;
	this->brain_ = new Brain();
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
	*(this->brain_) = *(dog.brain_);
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "Ouaf" << std::endl;
	return ;
}

void	Dog::setIdea(int index, std::string const& idea) {
	this->brain_->setIdea(index, idea);
	return ;
}

std::string	Dog::getIdea(int index) const {
	return (this->brain_->getIdea(index));
}
