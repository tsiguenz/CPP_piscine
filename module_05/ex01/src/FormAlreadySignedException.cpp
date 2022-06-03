/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FormAlreadySignedException.cpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:04:43 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/03 14:08:13 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char*	Form::FormAlreadySignedException::what() const throw() {
	return ("form is already signed\n");
}
