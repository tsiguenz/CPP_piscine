/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:42:47 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/20 16:05:52 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
	TableOfFctPointer	newTable[NB_FCT] = 	{{"DEBUG", &Harl::debug},
											{"INFO", &Harl::info},
											{"WARNING", &Harl::warning},
											{"ERROR", &Harl::error}};
	this->table_[0] = newTable[0];
	this->table_[1] = newTable[1];
	this->table_[2] = newTable[2];
	this->table_[3] = newTable[3];
	return ;
}

Harl::~Harl(void) {
	return ;
}

void	Harl::debug(void) {
	std::cout << 	"I love having extra bacon for " <<
					"my 7XL-double-cheese-triple-pickle-specialketchup " <<
					"burger. I really do!" << std::endl;
}

void	Harl::info(void) {
	std::cout << 	"I cannot believe adding extra bacon costs more money. " <<
					"You didn’t put enough bacon in my burger! " <<
					"If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void) {
	std::cout << 	"I think I deserve to have some extra bacon for free. " <<
					"I’ve been coming for years whereas you started working " <<
					"here since last month." << std::endl;
}

void	Harl::error(void) {
	std::cout << 	"This is unacceptable! " <<
					"I want to speak to the manager now." << std::endl;
}

int	Harl::resolveLevel(std::string const level) {
	for (int i = 0; i < NB_FCT; i++) {
		if (table_[i].level == level)
			return (i);
	}
	return (-1);
}

void	Harl::complain(std::string const level) {
	int	nbLevel = resolveLevel(level);

	if (nbLevel == -1) {
		std::cout << MSG_DEFAULT << std::endl;
		return ;
	}
	switch (nbLevel) {
		case 0:
			(this->*table_[0].fct)();
		case 1:
			(this->*table_[1].fct)();
		case 2:
			(this->*table_[2].fct)();
		case 3:
			(this->*table_[3].fct)();
	}
}
