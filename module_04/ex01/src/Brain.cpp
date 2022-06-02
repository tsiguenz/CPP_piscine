/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:51:32 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/02 15:01:47 by tsiguenz         ###   ########.fr       */
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
	for (int i = 0; i < 100; i++)
		this->ideas_[i] = brain.getIdea(i);
	return *this;
}

std::string	Brain::getIdea(int index) const {
	if (index < 0 || index >= 100)
		return ("");
	return (this->ideas_[index]);
}

void	Brain::setIdea(int index, std::string const& idea) {
	if (index < 0 || index >= 100) {
		std::cerr << "Index not in range of brain (0 -> 99)" << std::endl;
		return ;
	}
	this->ideas_[index] = idea;
}
