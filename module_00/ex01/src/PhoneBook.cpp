/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:10:04 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/12 18:27:50 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myAwesomePhoneBook.h"
#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {

	this->nbContact_ = 0;
	return ;
}

PhoneBook::~PhoneBook(void) {

	return ;
}

void	PhoneBook::addContact(Contact contact) {

	if (nbContact_ != 8) {
		this->nbContact_++;
		this->contacts_[this->nbContact_ - 1] = contact;
	} 
	else {
		shiftContacts();
		this->contacts_[this->nbContact_] = contact;
	}
	return ;
}

void	PhoneBook::shiftContacts(void) {

	for (int i = 7; i >= 0; i++)
		contacts_[i - 1] = contacts_[i];
	return ;
}

void	PhoneBook::printContact(int index){

	std::cout << "----------------------------------------" << std::endl;
	std::cout << MSG_IN << this->contacts_[index].getIndex() << std::endl;
	std::cout << MSG_FN << this->contacts_[index].getFirstName() << std::endl;
	std::cout << MSG_LN << this->contacts_[index].getLastName() << std::endl;
	std::cout << MSG_NN << this->contacts_[index].getNickName() << std::endl;
	std::cout << MSG_PN << this->contacts_[index].getPhoneNumber() << std::endl;
	std::cout << MSG_DS << this->contacts_[index].getDarkestSecret() << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	return ;
}
