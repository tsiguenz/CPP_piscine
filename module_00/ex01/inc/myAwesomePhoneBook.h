/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myAwesomePhoneBook.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:12:42 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/15 22:19:47 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_AWSOME_PHONE_BOOK_H
#define MY_AWSOME_PHONE_BOOK_H

# include <iostream>
# include <limits>

# define MSG_IN "Index : " 
# define MSG_FN "First name : " 
# define MSG_LN "Last name : " 
# define MSG_NN "Nickname : " 
# define MSG_PN "Phone number : " 
# define MSG_DS "Darkest secret : " 
# define MSG_HELP_HOME "Type a keyword (ADD, SEARCH or EXIT) :"
# define MSG_ERR_EMPTY "Field can't be empty" 
# define MSG_DETAIL "Select an index for see details : "
# define MSG_HEADER_DETAIL "     index|first name| last name|  nickname"
# define MSG_ERR_BAD_FORMAT_INDEX "Bad index. You must try between 1 and "
# define MSG_SEARCH_BUT_NO_CONTACT "No contact in the phonebook :("

enum	e_fields {

	FIRST_NAME,
	LAST_NAME,
	NICK_NAME,
	PHONE_NUMBER,
	DARKEST_SECRET
};

void	ignoreLine(void);
#endif
