/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:38:38 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/03 17:59:53 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "AForm.hpp"

class PresidentialPardonForm: public AForm {
	public:
		PresidentialPardonForm(std::string name);
		PresidentialPardonForm(PresidentialPardonForm const& presidentialPardonForm);
		virtual ~PresidentialPardonForm(void);
		PresidentialPardonForm& operator=(PresidentialPardonForm const& presidentialPardonForm);
		void	execute(Bureaucrat const& bureaucrat) const;

	private:
		PresidentialPardonForm();
	};

#endif // PRESIDENTIALPARDONFORM_HPP
