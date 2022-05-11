/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:09:47 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/11 17:30:09 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "Contact.hpp"

class PhoneBook {

	public:

//	Contact	getContact(Contact contact);
//	void	setContact(Contact contact);
	PhoneBook(void);
	~PhoneBook(void);

	private:

	Contact	contacts_[8];
};

#endif
