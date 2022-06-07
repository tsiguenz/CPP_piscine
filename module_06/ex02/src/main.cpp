/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 20:15:44 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/07 21:56:53 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void) {
	srand(time(NULL));
	int	random = rand() % 100 + 1;

	std::cout << random << std::endl;
	if (random <= 33)
		return new A;
	if (random > 33 && random <= 66)
		return new B;
	if (random > 66)
		return new C;
	return (NULL);
}

void	identify(Base* p) {
	if (dynamic_cast<A*>(p) != 0)
		std::cout << "p: A" << std::endl;
	if (dynamic_cast<B*>(p) != 0)
		std::cout << "p: B" << std::endl;
	if (dynamic_cast<C*>(p) != 0)
		std::cout << "p: C" << std::endl;
}

void	identify(Base& p) {
	try {
		(void) dynamic_cast<A&>(p);
		std::cout << "p: A" << std::endl;
	}
	catch (std::exception &e) {
	}
	try {
		(void) dynamic_cast<B&>(p);
		std::cout << "p: B" << std::endl;
	}
	catch (std::exception &e) {
	}
	try {
		(void) dynamic_cast<C&>(p);
		std::cout << "p: C" << std::endl;
	}
	catch (std::exception &e) {
	}
}

int	main() {
	Base* b = generate();
	identify(b);
	identify(*b);
	delete b;
	return 0;
}
