/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 22:34:42 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/18 23:26:10 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanB {

public:
	HumanB(std::string name);
	~HumanB(void);

	void	setWeapon(Weapon& weapon);
	void	attack(void) const;

private:
	std::string const	name_;
	Weapon*				weapon_;

};

#endif
