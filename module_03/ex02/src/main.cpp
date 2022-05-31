/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:00:55 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/31 12:15:13 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
	FragTrap	p1("toto");

	p1.highFivesGuys();
	p1.attack("tata");
	std::cout << "p1 = " << p1 << std::endl;
	p1.takeDamage(3);
	std::cout << "p1 = " << p1 << std::endl;
	p1.beRepaired(3);
	std::cout << "p1 = " << p1 << std::endl;
	p1.takeDamage(10);
	std::cout << "p1 = " << p1 << std::endl;
	p1.beRepaired(10);
	std::cout << "p1 = " << p1 << std::endl;
	p1.takeDamage(100);
	std::cout << "p1 = " << p1 << std::endl;
	p1.attack("tata");
	FragTrap	p2;
	p2 = p1;
	std::cout << "p2 = " << p2 << std::endl;
	p2.attack("tata");
	FragTrap	p3(p2);
	std::cout << "p3 = " << p3 << std::endl;
	p1.highFivesGuys();
	return (0);
}
