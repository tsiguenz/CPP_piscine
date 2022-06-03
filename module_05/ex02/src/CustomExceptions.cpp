/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CustomExceptions.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:46:17 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/03 15:50:37 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

const char*	Bureaucrat::GradeTooHighException::what() const throw() {
	return ("grade is too high\n");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return ("grade is too low\n");
}

const char*	AForm::FormAlreadySignedException::what() const throw() {
	return ("form is already signed\n");
}

const char*	AForm::GradeTooHighException::what() const throw() {
	return ("grade is too high\n");
}

const char*	AForm::GradeTooLowException::what() const throw() {
	return ("grade is too low\n");
}

const char*	AForm::FormIsNotSignedException::what() const throw() {
	return ("form is not signed\n");
}
