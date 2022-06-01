/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:52:16 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/01 17:19:08 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const& materiasource);
		virtual ~MateriaSource(void);
		MateriaSource& operator=(MateriaSource const& materiasource);
		AMateria*	getMateria(int index) const;
		//void		learnMateria(AMateria*);
		//AMateria*	createMateria(std::string const& type);

	private:
		AMateria*	materia_[4];
};

#endif // MATERIASOURCE_HPP
