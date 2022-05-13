/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:10:04 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/13 19:08:25 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myAwesomePhoneBook.h"
#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {

	this->nbContact_ = 0;
}

PhoneBook::~PhoneBook(void) {}

int		PhoneBook::getNbContact(void) {

	return (this->nbContact_);
}

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

	for (int i = NB_CONTACT_MAX - 1; i > 0; i--) {
		contacts_[i - 1] = contacts_[i];
	}
}

void	PhoneBook::printContactByIndex(int index) const {

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

	Contact		contact;
	std::string	str;

	std::cout << MSG_HEADER_DETAIL << std::endl;
	for (int i = 0; i < this->nbContact_; i++) {
		contact = this->contacts_[i];
		std::cout << "         " << contact.getIndex() << "|";
		str.append(getFieldFormatedForResume(contact.getFirstName()));
		str.append(getFieldFormatedForResume(contact.getLastName()));
		str.append(getFieldFormatedForResume(contact.getNickName()));
		str.resize(str.size() - 1);
		std::cout << str << std::endl;
		str.clear();
	}
}

std::string	PhoneBook::getFieldFormatedForResume(std::string field) const {

	if (field.size() > 10)
		return (field.substr(0, 9).append(".|"));
	return (field.append("|").insert(0, 11 - field.size(), ' '));
}
