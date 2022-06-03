/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:47:05 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/03 09:54:06 by tsiguenz         ###   ########.fr       */
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
		Bureaucrat	b1("toto", 1);
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

	std::cout << std::endl << "----- Is too low : -----" << std::endl << std::endl;
	try {
		Bureaucrat	b1("toto", 150);
		Bureaucrat	b2(b1);
		std::cout << "b1 : " << b1 << std::endl;
		std::cout << "b1 downGrade()" << std::endl;
		b1.downGrade();
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
	return (0);
}
