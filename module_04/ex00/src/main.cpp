/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:47:05 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/31 16:20:25 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int	main(void) {
	std::cout << "Constructors :" << std::endl << std::endl;
	Dog	d;
	Dog	d2;
	Cat	c;
	Cat	c2(c);
	Animal	a;
	d2 = d;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wj = new WrongDog();
	const WrongAnimal* wi = new WrongCat();

	std::cout << std::endl << "My tests :" << std::endl << std::endl;
	std::cout << "Dog make sound : ";
	d.makeSound();
	std::cout << "Dog make sound : ";
	d2.makeSound();
	std::cout << "Cat make sound : ";
	c.makeSound();
	std::cout << "Cat make sound : ";
	c2.makeSound();
	std::cout << "Animal make sound : ";
	a.makeSound();

	std::cout << std::endl << "Subject tests :" << std::endl << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl << "Subject Wrong tests :" << std::endl << std::endl;
	std::cout << wj->getType() << " " << std::endl;
	std::cout << wi->getType() << " " << std::endl;
	wi->makeSound(); //will output the cat sound!
	wj->makeSound();
	wmeta->makeSound();

	std::cout << std::endl << "Destructors :" << std::endl << std::endl;
	delete meta;
	delete j;
	delete i;
	delete wmeta;
	delete wj;
	delete wi;
	return (0);
}
