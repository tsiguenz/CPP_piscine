/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:50:33 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/31 15:46:20 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {

public:
	Animal(void);
	Animal(Animal const& animal);
	virtual ~Animal(void);
	Animal& operator=(Animal const& animal);
	std::string	getType(void) const;
	virtual void	makeSound(void) const;

protected:
	std::string	type;

};

#endif // ANIMAL_HPP
