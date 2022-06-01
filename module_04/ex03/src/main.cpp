/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:47:05 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/01 18:51:11 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main(void) {
// Instanciacion
	ICharacter*	c = new Character("toto");
	AMateria*	mc = new Cure();
	AMateria*	mc2 = mc->clone();
	AMateria*	mi = new Ice();
	AMateria*	mi2 = mi->clone();

// Tests
	std::cout << "----- Materias tests : -----" << std::endl;
	std::cout << c->getName() << std::endl;
	std::cout << "mc = " << mc->getType() << std::endl;
	std::cout << "mc2 = " << mc2->getType() << std::endl;
	std::cout << "mi = " << mi->getType() << std::endl;
	std::cout << "mi2 = " << mi2->getType() << std::endl;
	mc->use(*c);
	mc2->use(*c);
	mi->use(*c);
	mi2->use(*c);

// Deletion
	delete c;
	delete mc;
	delete mc2;
	delete mi;
	delete mi2;
	return (0);
}
