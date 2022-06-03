/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:47:05 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/03 18:13:49 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

int	main() {
// ShrubberyCreationForm
	std::cout << std::endl << "----- Tests ShrubberyCreationForm : -----" << std::endl << std::endl;
// RobotomyRequestForm
	std::cout << std::endl << "----- Tests RobotomyRequestForm : -----" << std::endl << std::endl;
// PresidentialPardonForm
	std::cout << std::endl << "----- Tests PresidentialPardonForm : -----" << std::endl << std::endl;
	try {
		std::cout << "Try to execute signed form with good grade exec and without :" << std::endl << std::endl;
		Bureaucrat	b1("toto", 5);
		Bureaucrat	b2(b1);
		std::cout << "Create b2 by copy with b1" << std::endl;
		PresidentialPardonForm	form1("formOne");
		std::cout << form1 << std::endl;
		std::cout << "b1 = " << b1 << std::endl;
		std::cout << "b2 = " << b2 << std::endl;
		b1.executeForm(form1);
		b1.signForm(form1);
		form1.execute(b1);
		b1.signForm(form1);
		std::cout << "b1 downgrade" << std::endl;
		b1.downGrade();
		std::cout << "b1 = " << b1 << std::endl;
		std::cout << "b2 = " << b2 << std::endl;
		b2 = b1;
		std::cout << "b2 = b1" << std::endl;
		std::cout << "b1 = " << b1 << std::endl;
		std::cout << "b2 = " << b2 << std::endl;
		b1.executeForm(form1);
		form1.execute(b1);
	}
	catch (std::exception& e) {
		std::cerr << "Exception catch in main : " << e.what();
	}
	return (0);
}
