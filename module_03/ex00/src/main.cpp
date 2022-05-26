/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:00:55 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/26 11:46:07 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	p1("toto");

	p1.attack("tata");
	std::cout << "p1 HP = " << p1.getHitPoint() << std::endl;
	std::cout << "p1 EP = " << p1.getEnergyPoint() << std::endl;
	p1.takeDamage(3);
	std::cout << "p1 HP = " << p1.getHitPoint() << std::endl;
	p1.beRepaired(3);
	std::cout << "p1 HP = " << p1.getHitPoint() << std::endl;
	p1.takeDamage(10);
	std::cout << "p1 HP = " << p1.getHitPoint() << std::endl;
	p1.beRepaired(10);
	std::cout << "p1 HP = " << p1.getHitPoint() << std::endl;
	p1.takeDamage(10);
	std::cout << "p1 HP = " << p1.getHitPoint() << std::endl;
	std::cout << "p1 EP = " << p1.getEnergyPoint() << std::endl;
	p1.attack("tata");
	ClapTrap	p2 = p1;
	std::cout << "p2 name = " << p2.getName() << std::endl;
	std::cout << "p2 HP = " << p2.getHitPoint() << std::endl;
	std::cout << "p2 EP = " << p2.getEnergyPoint() << std::endl;
	p1.attack("tata");
	return (0);
}
