/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmuller <flmuller@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:34:08 by flmuller          #+#    #+#             */
/*   Updated: 2025/03/12 11:23:39 by flmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

#include <iostream>
#include <algorithm>

template < typename T>
typename T::const_iterator easyfind(const T& container, const int &toFind)
{
	typename T::const_iterator it = std::find(container.begin(), container.end(), toFind);

	if (it == container.end())
	{
		throw std::out_of_range("element not found");
	}
	return it;
}

#endif