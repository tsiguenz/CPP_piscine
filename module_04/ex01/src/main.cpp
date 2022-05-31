/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:47:05 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/31 18:29:21 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main(void) {
	const Animal* i = new Dog();
	(void) i;
	std::cout << i->getType() << std::endl;
	i->setIdea(0, "toto");
	std::cout << i->getIdea(0) << std::endl;
	delete i;
	return (0);
}
