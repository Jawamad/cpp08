/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmuller <flmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 11:43:00 by flmuller          #+#    #+#             */
/*   Updated: 2025/03/19 15:56:42 by flmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>
#include <limits>

class Span 
{
	private:
		std::vector<int> *_container;
		unsigned int _n;
	public:
		Span();
		Span(unsigned int n);
		Span(Span const& obj);
		~Span();

		Span&	operator=(Span const& rhs);

		unsigned int		getN()const;
		std::vector<int>	*getContainer() const;
		void				addNumber(int number);
		int					shortestSpan();
		int					longestSpan();
		void				fillSpan();
		void				printSpan();
};

#endif 