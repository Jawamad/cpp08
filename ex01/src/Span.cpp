/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmuller <flmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:34:31 by flmuller          #+#    #+#             */
/*   Updated: 2025/03/28 14:40:43 by flmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

Span::Span(){}

Span::Span(unsigned int n):_container(new std::vector<int>[n]), _n(n){}

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
	{
		_n = rhs.getN();
		if (_container != NULL)
			delete[] _container;
		_container = rhs.getContainer();
	}
	return *this;
}

unsigned int Span::getN() const
{
	return _n;
}

std::vector<int> *Span::getContainer() const
{
	return _container;
}

void	Span::addNumber(int number)
{
	if (_container->size() == _n || _n == 0)
		throw std::out_of_range("there is no space for new number in this Span.");
	_container->push_back(number);
}

int	Span::shortestSpan()
{
	if (_container->size() < 2 || _n == 0)
		throw std::logic_error("not enough numbers in Span");
	std::vector<int> sorted = *_container;
	std::sort(sorted.begin(), sorted.end());
	int	minSpan = std::numeric_limits<int>::max();
	for (std::vector<int>::iterator it = sorted.begin(); it != sorted.end() - 1; ++it)
	{
		int	diff = *(it + 1)- *it;
		if (diff < minSpan)
			minSpan = diff;
	}
	return minSpan;
}

int	Span::longestSpan()
{
	if (_container->size() < 2 || _n == 0)
		throw std::logic_error("not enough numbers in Span");
	int minVal = *std::min_element(_container->begin(), _container->end());
	int maxVal = *std::max_element(_container->begin(), _container->end());
	return maxVal - minVal;
}

void	Span::fillSpan()
{
	if (_n == 0)
		throw std::out_of_range("there is no space in this Span.");
	for (unsigned int i = 0; i < _n; i++)
		_container->push_back(rand() % 100 );
}

void	Span::printSpan()
{
	if (_n == 0)
		return;
	std::vector<int>::iterator it = _container->begin();
	std::cout << *it ;
	while (it != _container->end() - 1)
	{
		it++;
		std::cout << "," << *it ;
	}
	std::cout << std::endl;
}