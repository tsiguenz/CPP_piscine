/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:19:01 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/01 17:15:34 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure(void);
		Cure(Cure const& cure);
		virtual ~Cure(void);
		Cure& operator=(Cure const& cure);
		virtual AMateria*	clone(void) const;
		virtual void	use(ICharacter& target);
};

#endif // CURE_HPP
