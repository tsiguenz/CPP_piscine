/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 10:20:45 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/03 14:06:15 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		Form(std::string name, int gradeForSign, int gradeForExec);
		Form(Form const& form);
		virtual ~Form(void);
		void	beSigned(Bureaucrat const& bureaucrat);
		std::string	getName() const;
		bool		getIsigned() const;
		int			getGradeForSign() const;
		int			getGradeForExec() const;

	private:
		Form(void);
		Form& operator=(Form const& form);
		std::string const	name_;
		bool				isSigned_;
		int			const	gradeForSign_;
		int			const	gradeForExec_;
		class GradeTooHighException: public std::exception {
			private:
				virtual const char*	what() const throw();
		};
		class GradeTooLowException: public std::exception {
			private:
				virtual const char*	what() const throw();
		};
		class FormAlreadySignedException: public std::exception {
			private:
				virtual const char*	what() const throw();
		};
	};

std::ostream& operator<<(std::ostream& os, Form const& form);

#endif // FORM_HPP
