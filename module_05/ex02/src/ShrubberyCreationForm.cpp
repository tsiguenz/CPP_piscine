/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:38:38 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/06 11:35:24 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name): AForm(name, 145, 137) {
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& form)
: AForm(form.getName(), form.getGradeForSign() \
, form.getGradeForExec()) {
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	return ;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const& shrubberyCreationForm) {
	(void) shrubberyCreationForm;
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const& bureaucrat) const {
	this->canExecute(bureaucrat);
	std::ofstream	ofs((bureaucrat.getName() + "_shrubbery").c_str(), std::ofstream::app);
	if (ofs == 0)
		throw ShrubberyCreationForm::ErrorWhileOpeningFile();
	ofs << TREE;
	ofs.close();
	std::cout << "new shrubbery created" << std::endl;
	return ;
}
