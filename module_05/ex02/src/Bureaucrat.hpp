/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 18:22:49 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/03 17:57:56 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <ostream>
# include "AForm.hpp"

class AForm;

class Bureaucrat {
	public:
		Bureaucrat(std::string const& name, int const& grade);
		Bureaucrat(Bureaucrat const& bureaucrat);
		virtual ~Bureaucrat();
		Bureaucrat& operator=(Bureaucrat const& bureaucrat);
		std::string	getName() const;
		int			getGrade() const;
		void		upGrade();
		void		downGrade();
		void		signForm(AForm& form);
		void		executeForm(AForm const& form) const;

	private:
		Bureaucrat(void);
		std::string const	name_;
		int	grade_;
		class GradeTooHighException: public std::exception {
			private:
				virtual const char*	what() const throw();
		};
		class GradeTooLowException: public std::exception {
			private:
				virtual const char*	what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, Bureaucrat const& bureaucrat);

#endif // BUREAUCRAT_HPP
