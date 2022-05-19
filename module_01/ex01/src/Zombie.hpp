/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:27:00 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/18 18:20:51 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	void	announce(void) const;
	void	setName(std::string name);

private:
	std::string	name_;
};

#endif
