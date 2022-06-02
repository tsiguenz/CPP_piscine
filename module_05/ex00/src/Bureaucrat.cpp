/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 18:22:49 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/02 18:44:45 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): name_(), grade_() {
	return ;
}

Bureaucrat::Bureaucrat(std::string const& name, int const& grade): name_(name), grade_(grade) {
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const& bureaucrat) {
	*this = bureaucrat;
	return ;
}

Bureaucrat::~Bureaucrat(void) {
	return ;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& bureaucrat) {
	(void) bureaucrat;
	return *this;
}

std::string	Bureaucrat::getName(void) const {
	return (this->name_);
}

int	Bureaucrat::getGrade(void) const {
	return (this->grade_);
}

void	Bureaucrat::upGrade(int nb) {
	this->grade_ -= nb;
	return ;
}

void	Bureaucrat::downGrade(int nb) {
	this->grade_ += nb;
	return ;
}

std::ostream& operator<<(std::ostream& os, Bureaucrat const& bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}
