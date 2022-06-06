/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:55:55 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/06 18:21:27 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	return ;
}

Intern::Intern(Intern const& intern) {
	*this = intern;
	return ;
}

Intern::~Intern() {
	return ;
}

Intern&	Intern::operator=(Intern const& intern) {
	(void) intern;
	return *this;
}

int	Intern::resolveTypes(std::string const& type) const {
	static std::string const	types[3] = 
		{"shrubbery request", "robotomy request", "presidental request"};

	for (int i = 0; i < 3; i++) {
		if (type == types[i])
			return (i);
	}
	return (-1);
}

AForm* Intern::makeForm(std::string const& type, std::string const& name) const {
	int	nbType = resolveTypes(type);

	if (nbType != -1) {
		std::cout << "Intern creates " << name << std::endl;
		switch (nbType) {
			case 0: return (new ShrubberyCreationForm(name));
			case 1: return (new RobotomyRequestForm(name));
			case 2: return (new PresidentialPardonForm(name));
		}
	}
	std::cerr << "Form " << type << " does not exist" << std::endl;
	return (NULL);
}
