/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:57:09 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/31 18:10:36 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal {

public:
	Dog(void);
	Dog(Dog const& dog);
	virtual ~Dog(void);
	Dog& operator=(Dog const& dog);
	void	makeSound(void) const;
	void	setIdea(int index, std::string const& idea);
	std::string	getIdea(int index) const;

private:
	Brain*	brain_;

};

#endif // DOG_HPP
