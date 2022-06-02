/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:57:09 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/02 15:02:33 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "Cat default constructor" << std::endl;
	this->type = "Cat";
	this->brain_ = new Brain();
	return ;
}

Cat::Cat(Cat const& cat) {
	std::cout << "Cat copy constructor" << std::endl;
	this->brain_ = new Brain();
	*this = cat;
	return ;
}

Cat::~Cat(void) {
	std::cout << this->type << " destructor" << std::endl;
	delete this->brain_;
	return ;
}

Cat&	Cat::operator=(Cat const& cat) {
	this->type = cat.type;
	*(this->brain_) = *(cat.brain_);
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "Miaou" << std::endl;
	return ;
}

void	Cat::setIdea(int index, std::string const& idea) {
	this->brain_->setIdea(index, idea);
	return ;
}

std::string	Cat::getIdea(int index) const {
	return (this->brain_->getIdea(index));
}
