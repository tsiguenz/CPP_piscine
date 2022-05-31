/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:57:09 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/31 16:05:13 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	std::cout << "WrongCat default constructor" << std::endl;
	this->type = std::string("WrongCat");
	return ;
}

WrongCat::WrongCat(WrongCat const& wrongcat) {
	*this = wrongcat;
	return ;
}

WrongCat::~WrongCat(void) {
	std::cout << this->type << " destructor" << std::endl;
	return ;
}

WrongCat&	WrongCat::operator=(WrongCat const& wrongcat) {
	this->type = wrongcat.type;
	return *this;
}

void	WrongCat::makeSound(void) const {
	std::cout << "Miaou" << std::endl;
	return ;
}
