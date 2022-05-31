/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:51:32 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/31 18:24:00 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain default constructor" << std::endl;
	return ;
}

Brain::Brain(Brain const& brain) {
	std::cout << "Brain copy constructor" << std::endl;
	*this = brain;
	return ;
}

Brain::~Brain(void) {
	std::cout << "Brain destructor" << std::endl;
	return ;
}

Brain&	Brain::operator=(Brain const& brain) {
	std::cout << "Brain assignment operator" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas_[i] = brain.getIdea(i);
	return *this;
}

std::string	Brain::getIdea(int index) const {
	return (this->ideas_[index]);
}

void	Brain::setIdea(int index, std::string const& idea) {
	if (index >= 100) {
		std::cerr << "Index not in range of brain (0 -> 99)" << std::endl;
		return ;
	}
	this->ideas_[index] = idea;
}
