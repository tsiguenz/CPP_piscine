/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:38:38 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/06 11:21:23 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name): AForm(name, 72, 45) {
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& form)
: AForm(form.getName(), form.getGradeForSign() \
, form.getGradeForExec()) {
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	return ;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const& robotomyRequestForm) {
	(void) robotomyRequestForm;
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const& bureaucrat) const {
	static bool	canRobotomize = true;

	this->canExecute(bureaucrat);
	if (canRobotomize == true)
		std::cout << bureaucrat.getName() << " has been robotomized successfully" << std::endl;
	else
		std::cout << bureaucrat.getName() << " robotomization fail..." << std::endl;
	canRobotomize = !canRobotomize;
	return ;
}
