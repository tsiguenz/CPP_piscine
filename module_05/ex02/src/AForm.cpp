/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 10:20:45 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/03 17:57:14 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void): name_(), isSigned_(), gradeForSign_(), gradeForExec_() {
	return ;
}

AForm::AForm(std::string name, int gradeForSign, int gradeForExec)
: name_(name), gradeForSign_(gradeForSign), gradeForExec_(gradeForExec) {
	if (this->gradeForSign_ < 1 || this->gradeForExec_ < 1)
		throw AForm::GradeTooHighException();
	if (this->gradeForSign_ > 150 || this->gradeForExec_ > 150)
		throw AForm::GradeTooLowException();
	this->isSigned_ = false;
	return ;
}

AForm::AForm(AForm const& aform)
: name_(aform.name_), gradeForSign_(aform.gradeForSign_), gradeForExec_(aform.gradeForExec_) {
	if (this->gradeForSign_ < 1 || this->gradeForExec_ < 1)
		throw AForm::GradeTooHighException();
	if (this->gradeForSign_ > 150 || this->gradeForExec_ > 150)
		throw AForm::GradeTooLowException();
	return ;
}

AForm::~AForm(void) {
	return ;
}

AForm&	AForm::operator=(AForm const& aform) {
	(void) aform;
	return *this;
}

std::string	AForm::getName() const {
	return (this->name_);
}

bool	AForm::getIsigned() const {
	return (this->isSigned_);
}

int		AForm::getGradeForSign() const {
	return (this->gradeForSign_);
}

int		AForm::getGradeForExec() const {
	return (this->gradeForExec_);
}

void	AForm::beSigned(Bureaucrat const& bureaucrat) {
	if (this->isSigned_ == true)
		throw AForm::FormAlreadySignedException();
	if (bureaucrat.getGrade() > this->gradeForSign_)
		throw AForm::GradeTooLowException();
	this->isSigned_ = true;
	return ;
}

bool	AForm::canExecute(Bureaucrat const& bureaucrat) const {
	if (this->getGradeForExec() < bureaucrat.getGrade()) {
		throw AForm::GradeTooLowException();
		return (false);
	}
	if (this->getIsigned() == false) {
		throw AForm::FormIsNotSignedException();
		return (false);
	}
	return (true);
}

std::ostream& operator<<(std::ostream& os, AForm const& aform) {
	os << "aform name : " << aform.getName();
	os << " is signed : " << aform.getIsigned();
	os << " grade for sign : " << aform.getGradeForSign();
	os << " grade for exec : " << aform.getGradeForExec();
	return (os);
}
