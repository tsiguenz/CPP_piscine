/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:10:51 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/11 18:56:08 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/Contact.hpp"

Contact::Contact(	unsigned int 	index,
					std::string 	firstName,
					std::string 	lastName,
					std::string 	nickName, 
					std::string 	darkestSecret,
					std::string		phoneNumber		
				): 	
					_index(index),
					_firstName(firstName),
					_lastName(lastName),
					_nickName(nickName),
					_darkestSecret(darkestSecret),
					_phoneNumber(phoneNumber) {
	return ; 
}

Contact::~Contact(void) {
	return ;
}

int	Contact::getIndex(void) const {
	return (this->_index);
}

std::string	Contact::getFirstName(void) const {
	return (this->_firstName);
}

std::string	Contact::getLastName(void) const {
	return (this->_lastName);
}

std::string	Contact::getNickName(void) const {
	return (this->_nickName);
}

std::string	Contact::getDarkestSecret(void) const {
	return (this->_darkestSecret);
}

std::string	Contact::getPhoneNumber(void) const {
	return (this->_phoneNumber);
}
