/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:47:05 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/02 14:18:05 by tsiguenz         ###   ########.fr       */
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
	ICharacter*	c1 = new Character("tata");
	AMateria*	mcure = new Cure();
	AMateria*	mcure2 = mcure->clone();
	AMateria*	mice = new Ice();
	AMateria*	mice2 = mice->clone();
	AMateria*	mtest = NULL;

	IMateriaSource*	msrc = new MateriaSource();
	AMateria*	temp;

	// Tests
	std::cout << "----- Materias tests : -----" << std::endl << std::endl;

	std::cout << c->getName() << std::endl;
	std::cout << "mcure = " << mcure->getType() << std::endl;
	mcure->use(*c);
	std::cout << "mcure2 (mcure clone) = " << mcure2->getType() << std::endl;
	mcure2->use(*c);
	std::cout << "mice = " << mice->getType() << std::endl;
	mice->use(*c);
	std::cout << "mice2 (mice clone) = " << mice2->getType() << std::endl;
	mice2->use(*c);

	std::cout << std::endl << "----- MateriaSource tests : -----" << std::endl << std::endl;

	std::cout << "Create materia without learn materia :" << std::endl;
	msrc->createMateria("cure");
	msrc->learnMateria(mtest);
	msrc->learnMateria(new Ice());
	msrc->learnMateria(new Cure());
	msrc->learnMateria(new Cure());
	msrc->learnMateria(new Cure());
	temp = msrc->createMateria("ice");
	std::cout << "temp->type of createMateria(\"ice\") = " << temp->getType() << std::endl;
	delete temp;
	temp = msrc->createMateria("cure");
	std::cout << "temp->type of createMateria(\"cure\") = " << temp->getType() << std::endl;
	std::cout << "Learn too much materias :" << std::endl;
	msrc->learnMateria(new Cure());

	std::cout << std::endl << "----- Character tests : -----" << std::endl << std::endl;

	std::cout << "Try to use/unequip without materia and equip 5 materias :" << std::endl;
	c->unequip(1);
	c->use(0, *c);
	c->equip(mtest);
	c->equip(new Ice());
	c->equip(new Cure());
	c->equip(new Ice());
	c->equip(new Ice());
	c->equip(new Ice());
	c1->equip(new Cure());
	std::cout << "Use the assignment operator : " << std::endl;
	std::cout << "Before :" << std::endl;
	std::cout << "c : " << std::endl;
	c->use(0, *c);
	c->use(1, *c);
	std::cout << "c1 : " << std::endl;
	c1->use(0, *c);
	c1->use(1, *c);
	*((Character*) c1) = *((Character*) c);
	std::cout << "After :" << std::endl;
	std::cout << "c : " << std::endl;
	c->use(0, *c);
	c->use(1, *c);
	std::cout << "c1 : " << std::endl;
	c1->use(0, *c);
	c1->use(1, *c);


	delete temp;
	delete c;
	delete c1;
	delete mcure;
	delete mcure2;
	delete mice;
	delete mice2;
	delete msrc;

	std::cout << std::endl << "----- Subject tests : -----" << std::endl << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return (0);
}
