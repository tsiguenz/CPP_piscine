/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:47:05 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/06 12:28:13 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main() {
	Bureaucrat	b("toto", 1);
	Intern	i;
	AForm*	form;

	std::cout << b << std::endl;
	std::cout << std::endl << "Bad form test : " << std::endl << std::endl ;
	form = i.makeForm("unknown", "test");
	std::cout << std::endl << "Shrubbery tests :" << std::endl << std::endl ;
	form = i.makeForm("shrubbery request", "shrub");
	b.signForm(*form);
	b.executeForm(*form);
	delete form;
	std::cout << std::endl << "Robotomy tests :" << std::endl << std::endl ;
	form = i.makeForm("robotomy request", "robot");
	b.signForm(*form);
	b.executeForm(*form);
	delete form;
	std::cout << std::endl << "Presidential tests :" << std::endl << std::endl ;
	form = i.makeForm("presidental request", "pres");
	b.signForm(*form);
	b.executeForm(*form);
	delete form;
	return (0);
}
