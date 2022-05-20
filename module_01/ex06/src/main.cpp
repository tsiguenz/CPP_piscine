/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:43:11 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/20 16:07:46 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main(int ac, char **av) {
	Harl	harl;

	if (ac != 2) {
		std::cerr << "Bad number of parameters" << std::endl;
		return (1);
	}
	harl.complain(av[1]);
	return (0);
}
