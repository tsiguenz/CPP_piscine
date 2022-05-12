/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:10:33 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/12 17:42:52 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "myAwesomePhoneBook.h"

class	Contact {

	public:

	Contact(void);
	Contact(unsigned int 	index,
			std::string 	firstName,
			std::string 	lastName,
			std::string 	nickName, 
			std::string 	darkestSecret,
			std::string		phoneNumber
	);
	~Contact(void);

	int			getIndex(void) const;
	std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getNickName(void) const;
	std::string	getDarkestSecret(void) const;
	std::string	getPhoneNumber(void) const;

	private:

	unsigned int	index_;
	std::string		firstName_;
	std::string		lastName_;
	std::string		nickName_;
	std::string		darkestSecret_;
	std::string		phoneNumber_;
	
};
#endif
