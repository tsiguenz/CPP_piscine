/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:38:38 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/06 11:20:52 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "AForm.hpp"

class RobotomyRequestForm: public AForm {
	public:
		RobotomyRequestForm(std::string name);
		RobotomyRequestForm(RobotomyRequestForm const& robotomyRequestForm);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm& operator=(RobotomyRequestForm const& robotomyRequestForm);
		void	execute(Bureaucrat const& bureaucrat) const;

	private:
		RobotomyRequestForm();
	};

#endif // ROBOTOMYREQUESTFORM_HPP
