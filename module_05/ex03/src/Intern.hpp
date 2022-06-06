/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:55:55 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/06 12:30:20 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {
	public:
		Intern();
		Intern(Intern const& intern);
		virtual ~Intern();
		Intern& operator=(Intern const& intern);
		AForm* makeForm(std::string const& type, std::string const& name) const;

	private:
		int	resolveTypes(std::string const& type) const;
	};

#endif // INTERN_HPP
