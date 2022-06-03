/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 09:40:01 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/03 14:08:36 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return ("grade is too low\n");
}

const char*	Form::GradeTooLowException::what() const throw() {
	return ("grade is too low\n");
}
