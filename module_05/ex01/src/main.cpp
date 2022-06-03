/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:47:05 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/03 14:07:57 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main() {
	std::cout << "----- Is working : -----" << std::endl << std::endl;
	try {
		Form	f1("form1", 10, 10);
		Bureaucrat	b1("toto", 11);
		std::cout << b1 << std::endl;
		std::cout << f1 << std::endl;
		b1.signForm(f1);
		std::cout << f1 << std::endl;
		std::cout << "upgrade b1" << std::endl;
		b1.upGrade();
		std::cout << b1 << std::endl;
		b1.signForm(f1);
		std::cout << "sign second time" << std::endl;
		b1.signForm(f1);
		std::cout << f1 << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}
// Exception grade too high
	std::cout << std::endl << "----- Is too high : -----" << std::endl << std::endl;
	try {
		Form	f1("form1", 0, 10);
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}

	try {
		Form	f1("form1", 10, 0);
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}
// Exception grade too low
	std::cout << std::endl << "----- Is too low : -----" << std::endl << std::endl;
	try {
		Form	f1("form1", 1000, 10);
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}

	try {
		Form	f1("form1", 10, 1000);
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}
	return (0);
}
