/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:38:38 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/03 18:00:26 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name): AForm(name, 25, 5) {
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& form)
: AForm(form.getName(), form.getGradeForSign() \
, form.getGradeForExec()) {
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	return ;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const& presidentialPardonForm) {
	(void) presidentialPardonForm;
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const& bureaucrat) const {
//	try {
//		this->canExecute(bureaucrat);
//		std::cout	<< bureaucrat.getName() << " has been pardoned by Zaphod Beeblerox" \
//					<< std::endl;
//	}
//	catch (std::exception& e) {
//		std::cout << bureaucrat.getName() << " can't execute because " << e.what();
//	}
	if (this->canExecute(bureaucrat) == true)
		std::cout	<< bureaucrat.getName() << " has been pardoned by Zaphod Beeblerox" << std::endl;
	return ;
}
