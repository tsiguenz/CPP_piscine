/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:10:51 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/13 10:56:52 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myAwesomePhoneBook.h"
#include "Contact.hpp"

Contact::Contact(void){

	return ;
}
Contact::Contact(	std::string 	firstName,
					std::string 	lastName,
					std::string 	nickName, 
					std::string 	darkestSecret,
					std::string		phoneNumber		
				): 	
					firstName_(firstName),
					lastName_(lastName),
					nickName_(nickName),
					darkestSecret_(darkestSecret),
					phoneNumber_(phoneNumber) {
	this->index_ = 0;
	return ; 
}

Contact::~Contact(void) {
	return ;
}

int	Contact::getIndex(void) const {
	return (this->index_);
}

void	Contact::setIndex(unsigned int index) {
	this->index_ = index;
	return ;
}

std::string	Contact::getFirstName(void) const {
	return (this->firstName_);
}

std::string	Contact::getLastName(void) const {
	return (this->lastName_);
}

std::string	Contact::getNickName(void) const {
	return (this->nickName_);
}

std::string	Contact::getDarkestSecret(void) const {
	return (this->darkestSecret_);
}

std::string	Contact::getPhoneNumber(void) const {
	return (this->phoneNumber_);
}
