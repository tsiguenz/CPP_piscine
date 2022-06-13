/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:47:38 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/13 15:31:01 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <iterator>
# include <cmath>

typedef std::vector<int>::iterator VIIterator;

class Span {
	public:
		Span();
		Span(unsigned int const& N);
		Span(Span const& span);
		virtual ~Span();
		Span& operator=(Span const& span);
		int& operator[](int i);
		void	addNumber(int nb);
		int	shortestSpan();
		int	longestSpan();
		void	addRange(VIIterator begin, VIIterator end);

	private:
		std::vector<int>	tab_;
		unsigned int		N_;

	};

#endif // SPAN_HPP
