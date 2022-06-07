/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalarConversion.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:35:42 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/07 17:47:03 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERSION_H
# define SCALARCONVERSION_H

# include <iostream>
# include <limits>
# include <float.h>
# include <stdlib.h>
# include <cmath>
# include <cerrno>

void	printNumbers(char nb);
void	printNumbers(int nb);
void	printNumbers(float nb);
void	printNumbers(double nb);
bool	isChar(std::string str);
bool	isInt(std::string str);
bool	isFloat(std::string str);
bool	isDouble(std::string str);

#endif // SCALARCONVERSION_H
