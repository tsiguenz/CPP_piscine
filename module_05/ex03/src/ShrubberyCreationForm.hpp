/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:38:38 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/06 11:33:45 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"

#define TREE "     ccee88oo\n  C8O8O8Q8PoOb o8oo\n dOB69QO8PdUOpugoO9bD\nCgggbU8OU qOp qOdoUOdcb\n    6OuU  /p u gcoUodpP\n      \\\\\\//  /douUP\n        \\\\\\////\n         |||/\\\n         |||\\/\n         |||||\n   .....//||||\\....\n"

class ShrubberyCreationForm: public AForm {
	public:
		ShrubberyCreationForm(std::string name);
		ShrubberyCreationForm(ShrubberyCreationForm const& shrubberyCreationForm);
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const& shrubberyCreationForm);
		void	execute(Bureaucrat const& bureaucrat) const;
		class ErrorWhileOpeningFile: public std::exception {
			private:
				virtual const char*	what() const throw();
		};

	private:
		ShrubberyCreationForm();
	};

#endif // SHRUBBERYCREATIONFORM_HPP
