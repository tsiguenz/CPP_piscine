/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:47:05 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/03 09:43:27 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main(void) {
	std::cout << "-----Constructors :-----" << std::endl << std::endl;
// Subject
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Animal*	zoo[4];
	for (int i = 0; i < 4; i++) {
		if (i < 2)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
	}
// Animal instance
	Animal	a;
// Dog instances
	Dog	d1;
	Dog	d2;
	d1.setIdea(0, "I want to eat meat");
	d2 = d1;
	Dog	d3(d1);
// Cat instances
	Cat	c1;
	Cat	c2;
	c1.setIdea(0, "I want kill my human");
	c2 = c1;
	Cat	c3(c1);
	std::cout << std::endl << "-----My tests :-----" << std::endl << std::endl;
// Animal test
	std::cout << "Animal try to set idea and get idea" << std::endl;
	a.setIdea(0, "test");
	a.getIdea(0);
// Dog tests
	d1.setIdea(0, "I want to get fresh air");
	std::cout << std::endl << "Dog check setIdea / getIdea and deep copy" << std::endl;
	std::cout << "---> d1 idea(0) = " << d1.getIdea(0) << std::endl;
	std::cout << "---> d2 idea(0) = " << d2.getIdea(0) << std::endl;
	std::cout << "---> d3 idea(0) = " << d3.getIdea(0) << std::endl;
// Cat tests
	c1.setIdea(0, "Sleep is better");
	std::cout << std::endl << "Cat check setIdea / getIdea and deep copy" << std::endl;
	std::cout << "---> c1 idea(0) = " << c1.getIdea(0) << std::endl;
	std::cout << "---> c2 idea(0) = " << c2.getIdea(0) << std::endl;
	std::cout << "---> c3 idea(0) = " << c3.getIdea(0) << std::endl;
	std::cout << std::endl << "-----Destructors :-----" << std::endl << std::endl;
	for (int i = 0; i < 4; i++)
		delete zoo[i];
	delete j;
	delete i;
	return (0);
}
