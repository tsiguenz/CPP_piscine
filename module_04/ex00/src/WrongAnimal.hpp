/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:50:33 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/31 16:12:22 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {

public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const& wronganimal);
	virtual ~WrongAnimal(void);
	WrongAnimal& operator=(WrongAnimal const& wronganimal);
	std::string	getType(void) const;
	void	makeSound(void) const;

protected:
	std::string	type;

};

#endif // WRONGANIMAL_HPP
