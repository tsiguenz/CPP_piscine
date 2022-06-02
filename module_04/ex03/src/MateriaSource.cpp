/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:52:16 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/02 10:52:30 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void): nbMateria_(0) {
	return ;
}

MateriaSource::MateriaSource(MateriaSource const& materiasource) {
	*this = materiasource;
	return ;
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < this->nbMateria_; i++)
		delete this->materia_[i];
	return ;
}

MateriaSource&	MateriaSource::operator=(MateriaSource const& materiasource) {
	for (int i = 0; i < this->nbMateria_; i++)
		this->materia_[i] = materiasource.getMateria(i);
	this->nbMateria_ = materiasource.nbMateria_;
	return *this;
}

AMateria*	MateriaSource::getMateria(int index) const {
	if (index < 0 || index >= this->nbMateria_)
		return (NULL);
	return (this->materia_[index]);
}

void		MateriaSource::learnMateria(AMateria* materia) {
	if (this->nbMateria_ == 4) {
		std::cerr << "Can't learn materia, MateriaSource is full" << std::endl;
		delete materia;
		return ;
	}
	this->materia_[this->nbMateria_] = materia;
	this->nbMateria_++;
	return ;
}

AMateria*	MateriaSource::createMateria(std::string const& type) {
	for (int i = 0; i < this->nbMateria_; i++) {
		if (this->materia_[i]->getType() == type) {
			return (this->materia_[i]->clone());
		}
	}
	std::cerr << "Can't create materia, no materia with this type" << std::endl;
	return (NULL);
}
