/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 18:22:49 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/02 18:44:31 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <ostream>

class Bureaucrat {

public:
	Bureaucrat(void);
	Bureaucrat(std::string const& name, int const& grade);
	Bureaucrat(Bureaucrat const& bureaucrat);
	virtual ~Bureaucrat(void);
	Bureaucrat& operator=(Bureaucrat const& bureaucrat);
	std::string	getName(void) const;
	int			getGrade(void) const;
	void		upGrade(int nb);
	void		downGrade(int nb);

private:
	std::string const	name_;
	int	grade_;

};

std::ostream& operator<<(std::ostream& os, Bureaucrat const& bureaucrat);

#endif // BUREAUCRAT_HPP
