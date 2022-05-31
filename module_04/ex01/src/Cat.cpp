/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:57:09 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/31 16:08:29 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "Cat default constructor" << std::endl;
	this->type = std::string("Cat");
	return ;
}

Cat::Cat(Cat const& cat) {
	*this = cat;
	return ;
}

Cat::~Cat(void) {
	std::cout << this->type << " destructor" << std::endl;
	return ;
}

Cat&	Cat::operator=(Cat const& cat) {
	this->type = cat.type;
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "Miaou" << std::endl;
	return ;
}
