/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 10:20:45 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/03 18:00:11 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	protected:
		AForm(void);
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
		class FormIsNotSignedException: public std::exception {
			private:
				virtual const char*	what() const throw();
		};
	public:
		AForm(std::string name, int gradeForSign, int gradeForExec);
		AForm(AForm const& aform);
		virtual ~AForm(void);
		void			beSigned(Bureaucrat const& bureaucrat);
		virtual	void	execute(Bureaucrat const& executor) const = 0;
		std::string		getName() const;
		bool	   		getIsigned() const;
		int		   		getGradeForSign() const;
		int		   		getGradeForExec() const;
		bool	   		canExecute(Bureaucrat const& bureaucrat) const;

	private:
		AForm& operator=(AForm const& aform);
		std::string const	name_;
		bool				isSigned_;
		int			const	gradeForSign_;
		int			const	gradeForExec_;
	};

std::ostream& operator<<(std::ostream& os, AForm const& aform);

#endif // FORM_HPP
