/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmuller <flmuller@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:34:31 by flmuller          #+#    #+#             */
/*   Updated: 2025/03/13 16:59:35 by flmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

Span::Span(unsigned int n): N(n), _container(new std::vector<int>[n]){}

Span::Span(Span const& obj)
{
	if (this != &obj)
	{
		if (_container != NULL)
			delete[] _container;
		_container = new std::vector<int>[obj.getN()];
	}
	*this = obj;
}
Span::~Span()
{
	if (_container != NULL)
		delete [] _container;
}

Span&	Span::operator=(Span const& rhs)
{
	if (this != &rhs)
		N = rhs.getN();
		if (_container != NULL)
			delete[] _container;
		_container = rhs.getContainer();
	return *this;
}

unsigned int Span::getN() const
{
	return N;
}

std::vector<int> *Span::getContainer()
{
	return _container;
}

void	Span::addNumber(int number)
{
	if (_container.size() == N)
		throw std::out_of_range("there is no space for new number ins this Span.");
	_container.push_back(number);
}

int	Span::shortestSpan()
{
	int	result = longestSpan();
	std::vector<int>::const_iterator it = _container.begin();
	std::vector<int>::const_iterator nextit = it;
	++nextit;
	while (nextit != _container.end())
	{
		if (*nextit - *it < result)
			result = *nextit - *it;
		nextit++;
	}
	return result;
}

int	Span::longestSpan()
{
	if (N < 1)
		throw std::range_error("not enough numbers in Span");
	std::sort(_container.begin(), _container.end());
	return *_container.rbegin() - *_container.begin();
}

void	Span::fillSpan()
{
	if (N == 0)
		throw std::out_of_range("there is no space in this Span.");
	for (unsigned int i = 0; i < N; i++)
		_container.push_back(rand() % N);
}