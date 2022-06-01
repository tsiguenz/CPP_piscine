/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:03:45 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/01 17:23:25 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {
	protected:
		std::string	type;

	public:
		AMateria(void);
		AMateria(std::string const& type);
		AMateria(AMateria const& amateria);
		virtual ~AMateria(void);
		AMateria& operator=(AMateria const& amateria);
		std::string const&	getType(void) const;
		virtual AMateria*	clone(void) const = 0;
		virtual void	use(ICharacter& target);
};

#endif // AMATERIA_HPP
