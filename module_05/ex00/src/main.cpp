/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:47:05 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/06 13:42:43 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int	main() {
	std::cout << "----- Is working : -----" << std::endl << std::endl;
	try {
		Bureaucrat	b1("toto", 150);
		Bureaucrat	b2(b1);
		std::cout << "b1 : " << b1 << std::endl;
		std::cout << "b2 : " << b2 << std::endl;
		std::cout << "b1 upgrade()" << std::endl;
		b1.upGrade();
		std::cout << "b1 : " << b1 << std::endl;
		b2 = b1;
		std::cout << "b2 = b1" << std::endl;
		std::cout << "b2 : " << b2 << std::endl;
		std::cout << "b1 downGrade()" << std::endl;
		b1.downGrade();
		std::cout << "b1 : " << b1 << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}

	std::cout << std::endl << "----- Is too high : -----" << std::endl << std::endl;
	try {
		Bureaucrat	b1("toto", 0);
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}
	try {
		Bureaucrat	b1("toto", 1);
		Bureaucrat	b2(b1);
		std::cout << "b1 : " << b1 << std::endl;
		std::cout << "b2 : " << b2 << std::endl;
		std::cout << "b1 upgrade()" << std::endl;
		b1.upGrade();
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}

	std::cout << std::endl << "----- Is too low : -----" << std::endl << std::endl;
	try {
		Bureaucrat	b1("toto", 200);
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}
	try {
		Bureaucrat	b1("toto", 150);
		Bureaucrat	b2(b1);
		std::cout << "b1 : " << b1 << std::endl;
		std::cout << "b1 downGrade()" << std::endl;
		b1.downGrade();
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}
	return (0);
}
