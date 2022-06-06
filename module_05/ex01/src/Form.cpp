/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 10:20:45 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/06 13:46:32 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void): name_(), isSigned_(), gradeForSign_(), gradeForExec_() {
	return ;
}

Form::Form(std::string name, int gradeForSign, int gradeForExec)
: name_(name), gradeForSign_(gradeForSign), gradeForExec_(gradeForExec) {
	this->isSigned_ = false;
	if (this->gradeForSign_ < 1 || this->gradeForExec_ < 1)
		throw Form::GradeTooHighException();
	if (this->gradeForSign_ > 150 || this->gradeForExec_ > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::Form(Form const& form)
: name_(form.name_), gradeForSign_(form.gradeForSign_), gradeForExec_(form.gradeForExec_) {
	if (this->gradeForSign_ < 1 || this->gradeForExec_ < 1)
		throw Form::GradeTooHighException();
	if (this->gradeForSign_ > 150 || this->gradeForExec_ > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::~Form(void) {
	return ;
}

Form&	Form::operator=(Form const& form) {
	(void) form;
	return *this;
}

std::string	Form::getName() const {
	return (this->name_);
}

bool	Form::getIsigned() const {
	return (this->isSigned_);
}

int		Form::getGradeForSign() const {
	return (this->gradeForSign_);
}

int		Form::getGradeForExec() const {
	return (this->gradeForExec_);
}

void	Form::beSigned(Bureaucrat const& bureaucrat) {
	if (this->isSigned_ == true)
		throw Form::FormAlreadySignedException();
	if (bureaucrat.getGrade() > this->gradeForSign_)
		throw Form::GradeTooLowException();
	this->isSigned_ = true;
	return ;
}

std::ostream& operator<<(std::ostream& os, Form const& form) {
	os << "form name : " << form.getName();
	os << " is signed : " << form.getIsigned();
	os << " grade for sign : " << form.getGradeForSign();
	os << " grade for exec : " << form.getGradeForExec();
	return (os);
}
