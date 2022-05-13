/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:10:04 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/13 11:56:03 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myAwesomePhoneBook.h"
#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {

	this->nbContact_ = 0;
}

PhoneBook::~PhoneBook(void) {}

void	PhoneBook::addContact(Contact contact) {

	if (nbContact_ != NB_CONTACT_MAX) {
		this->nbContact_++;
		contact.setIndex(this->nbContact_);
		this->contacts_[this->nbContact_ - 1] = contact;
	} 
	else {
		contact.setIndex(1);
		shiftContacts();
		this->contacts_[0] = contact;
	}
}

void	PhoneBook::shiftContacts(void) {

	for (int i = NB_CONTACT_MAX - 1; i >= 0; i--) {
		contacts_[i - 1] = contacts_[i];
	}
}

void	PhoneBook::printContactByIndex(int index) {

	index--;
	std::cout << "----------------------------------------" << std::endl;
	std::cout << MSG_IN << this->contacts_[index].getIndex() << std::endl;
	std::cout << MSG_FN << this->contacts_[index].getFirstName() << std::endl;
	std::cout << MSG_LN << this->contacts_[index].getLastName() << std::endl;
	std::cout << MSG_NN << this->contacts_[index].getNickName() << std::endl;
	std::cout << MSG_PN << this->contacts_[index].getPhoneNumber() << std::endl;
	std::cout << MSG_DS << this->contacts_[index].getDarkestSecret() << std::endl;
	std::cout << "----------------------------------------" << std::endl;
}
void	PhoneBook::printContactsResume(void) {

	std::cout << (this->contacts_[0].getFirstName()).substr(0, 10) << std::endl;
}
