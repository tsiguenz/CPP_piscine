/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:50:33 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/01 14:04:26 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class AAnimal {

public:
	AAnimal(void);
	AAnimal(AAnimal const& animal);
	virtual ~AAnimal(void);
	AAnimal& operator=(AAnimal const& animal);
	std::string	getType(void) const;
	virtual void	makeSound(void) const = 0;
	virtual void	setIdea(int index, std::string const& idea) = 0;
	virtual std::string	getIdea(int index) const = 0;

protected:
	std::string	type;

};

#endif // ANIMAL_HPP
