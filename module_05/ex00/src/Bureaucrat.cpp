/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 18:22:49 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/06 13:43:11 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name_(), grade_() {
	return ;
}

Bureaucrat::Bureaucrat(std::string const& name, int const& grade): name_(name) {
	std::cout << "constructor called" << std::endl;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade_ = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const& bureaucrat): name_(bureaucrat.name_) {
	*this = bureaucrat;
	return ;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "destructor called" << std::endl;
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

std::ostream& operator<<(std::ostream& os, Bureaucrat const& bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}
