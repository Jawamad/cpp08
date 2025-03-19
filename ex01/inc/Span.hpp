/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmuller <flmuller@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 11:43:00 by flmuller          #+#    #+#             */
/*   Updated: 2025/03/13 17:01:16 by flmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>

class Span 
{
	private:
		std::vector<int> *_container;
		unsigned int N;
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
		template <typename Iterator>
		void				addRange(Iterator begin, Iterator end)
		{
			if (std::distance(begin, end) > (N - _container.size()))
				throw std::out_of_range("Not enough space in Span");
			while (begin != end)
			{
				addNumber(*begin);
				++begin;
			}
		}
};

#endif 