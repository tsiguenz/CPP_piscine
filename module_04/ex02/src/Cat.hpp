/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:57:09 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/01 11:57:43 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "AAnimal.hpp"

class Cat: public AAnimal {

public:
	Cat(void);
	Cat(Cat const& cat);
	virtual ~Cat(void);
	Cat& operator=(Cat const& cat);
	void	makeSound(void) const;
	void	setIdea(int index, std::string const& idea);
	std::string	getIdea(int index) const;

private:
	Brain*	brain_;

};

#endif // CAT_HPP
