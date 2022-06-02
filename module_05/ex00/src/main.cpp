/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:47:05 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/02 18:46:02 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int	main(void) {
	Bureaucrat	b("toto", 200);
	std::cout << b << std::endl;
	b.upGrade(10);
	std::cout << "after upgrade(10) : " << b << std::endl;
	b.downGrade(10);
	std::cout << "after downGrade(10) : " << b << std::endl;
	return (0);
}
