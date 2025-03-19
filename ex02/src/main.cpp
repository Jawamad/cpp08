/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmuller <flmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 18:03:15 by flmuller          #+#    #+#             */
/*   Updated: 2025/03/19 18:32:19 by flmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MutantStack.hpp"

# include <list>
# include <algorithm>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Last element : " << mstack.top() << std::endl;
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size of container : " << mstack.size() << std::endl;
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "Size of the copied stack: " << s.size() << std::endl;

	std::list<int> mlist;

////////// LIST TESTS /////////////
	std::cout << "\nLIST TESTS" << std::endl;
	mlist.push_back(5);
	mlist.push_back(17);
	std::cout << "Last element : " << mlist.back() << std::endl;
	std::cout << mlist.back() << std::endl;

	mlist.pop_back();
	std::cout << "Size of container : " << mlist.size() << std::endl;
	std::cout << mlist.size() << std::endl;

	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);
	std::list<int>::iterator it2 = mlist.begin();
	std::list<int>::iterator ite2 = mlist.end();
	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	std::list<int> s2(mlist);

	return 0;
}