/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmuller <flmuller@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 11:25:26 by flmuller          #+#    #+#             */
/*   Updated: 2025/03/12 14:38:00 by flmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/easyfind.tpp"
#include <vector>
#include <list>

int	main()
{
	std::vector<int> numbers;

	numbers.push_back(1);
	numbers.push_back(87);
	numbers.push_back(456);
	numbers.push_back(5);

	std::cout << "Vector container Elements" << std::endl;
	for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl << "easyfind 87 ond Vector container"<< std::endl;
	try {
		std::cout << *easyfind(numbers, 87) << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "easyfind 0 ond Vector container"<< std::endl;
	try {
		std::cout << *easyfind(numbers, 0) << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::list<int> listNumbers;

	listNumbers.push_back(1);
	listNumbers.push_back(87);
	listNumbers.push_back(456);
	listNumbers.push_back(5);

	std::cout << "List container Elements" << std::endl;
	for (std::list<int>::iterator it = listNumbers.begin(); it != listNumbers.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl << "easyfind 87 ond List container"<< std::endl;
	try {
		std::cout << *easyfind(listNumbers, 87) << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "easyfind 0 ond List container"<< std::endl;
	try {
		std::cout << *easyfind(listNumbers, 0) << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}
