/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmuller <flmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 18:03:15 by flmuller          #+#    #+#             */
/*   Updated: 2025/03/31 14:30:17 by flmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MutantStack.hpp"

# include <list>
# include <algorithm>

int main()
{
	////////// Stack TESTS /////////////
	std::cout << "###### Mandatory test ######" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Last element : " << mstack.top() << std::endl;
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

	////////// List TESTS /////////////
	std::cout << "\nLIST TESTS" << std::endl;
	mlist.push_back(5);
	mlist.push_back(17);
	std::cout << "Last element : " << mlist.back() << std::endl;
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
	std::cout << "Size of the copied list: " << s.size() << std::endl;
	////////// More tests /////////////
	std::cout << "###### More test ######" << std::endl;
	MutantStack<std::string> stringMStack;
	if (stringMStack.empty())
		std::cout << "stack is empty" << std::endl;
	else
		std::cout << "stack is not empty" << std::endl;
	stringMStack.push("zero");
	stringMStack.push("one");
	stringMStack.push("two");
	stringMStack.push("three");
	if (stringMStack.empty())
		std::cout << "stack is empty" << std::endl;
	else
		std::cout << "stack is not empty" << std::endl;
	MutantStack<std::string>::iterator itstr = stringMStack.begin();
	MutantStack<std::string>::iterator itestr = stringMStack.end();
	std::cout << "Stack content :" << std::endl;
	while (itstr != itestr)
	{
		std::cout << *itstr << std::endl;
		itstr++;
	}
	std::cout << "Size of the stack : " << stringMStack.size() << std::endl;

	stringMStack.pop();
	itstr = stringMStack.begin();
	itestr = stringMStack.end();

	std::cout << "Stack content :" << std::endl;
	while (itstr != itestr)
	{
		std::cout << *itstr << std::endl;
		itstr++;
	}
	std::cout << "Size of the stack : " << stringMStack.size() << std::endl;



	



	return 0;
}