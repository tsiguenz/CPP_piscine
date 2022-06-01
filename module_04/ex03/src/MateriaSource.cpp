/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:52:16 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/01 16:00:33 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	//this->materia_ = new AMateria();
	return ;
}

MateriaSource::MateriaSource(MateriaSource const& materiasource) {
	*this = materiasource;
	return ;
}

MateriaSource::~MateriaSource(void) {
	return ;
}

MateriaSource&	MateriaSource::operator=(MateriaSource const& materiasource) {
	for (int i = 0; i < 4; i++)
		this->materia_[i] = materiasource.getMateria(i);
	return *this;
}

AMateria*	MateriaSource::getMateria(int index) const {
	return (this->materia_[index]);
}
