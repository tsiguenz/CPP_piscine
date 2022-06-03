/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 09:41:13 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/03 14:08:27 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

const char*	Bureaucrat::GradeTooHighException::what() const throw() {
	return ("grade is too high\n");
}

const char*	Form::GradeTooHighException::what() const throw() {
	return ("grade is too high\n");
}
