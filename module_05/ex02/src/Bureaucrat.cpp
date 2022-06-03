/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 18:22:49 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/03 18:12:26 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name_(), grade_() {
	return ;
}

Bureaucrat::Bureaucrat(std::string const& name, int const& grade): name_(name) {
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	this->grade_ = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const& bureaucrat): name_(bureaucrat.name_) {
	*this = bureaucrat;
	return ;
}

Bureaucrat::~Bureaucrat() {
	return ;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& bureaucrat) {
	this->grade_ = bureaucrat.grade_;
	return *this;
}

std::string	Bureaucrat::getName() const {
	return (this->name_);
}

int	Bureaucrat::getGrade() const {
	return (this->grade_);
}

void	Bureaucrat::upGrade() {
	this->grade_--;
	if (this->grade_ < 1)
		throw Bureaucrat::GradeTooHighException();
	return ;
}

void	Bureaucrat::downGrade() {
	this->grade_++;
	if (this->grade_ > 150)
		throw Bureaucrat::GradeTooLowException();
	return ;
}

void		Bureaucrat::signForm(AForm& form) {
	try {
		form.beSigned(*this);
		std::cout << this->name_ << " signed " << form.getName() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << this->name_ << " couldn't sign " << form.getName() \
		<< " because " << e.what();
	}
}

void		Bureaucrat::executeForm(AForm const& form) const {
	try {
		form.execute(*this);
		std::cout	<< this->getName() << " executed " \
					<< form.getName() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << this->getName() << " can't execute because " << e.what();
	}
}

std::ostream& operator<<(std::ostream& os, Bureaucrat const& bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}
