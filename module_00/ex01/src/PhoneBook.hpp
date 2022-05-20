/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:09:47 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/19 09:48:53 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "myAwesomePhoneBook.h"
#include "Contact.hpp"
#include "PhoneBook.hpp"

#define NB_CONTACT_MAX 8

class PhoneBook {

public:

	PhoneBook(void); 
    ~PhoneBook(void);

	int			getNbContact(void) const;
	void		shiftContacts(void);
	void		printContactByIndex(int index) const;
	void		printContactsResume(void) const;
	std::string	getFieldFormatedForResume(std::string str) const;
	void		add(void);
	void		addContact(Contact contact);
	std::string	getFieldOfContact(std::string message) const;
	void		search(void) const;

private:

	Contact	contacts_[NB_CONTACT_MAX];
	int		nbContact_;
	int		indexOldestContact_;
};

#endif
