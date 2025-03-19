/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmuller <flmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:04:13 by flmuller          #+#    #+#             */
/*   Updated: 2025/03/19 15:56:27 by flmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

int main()
{
	srand(time(0));
	std::cout << "#### Mandatory Tests ####"<< std::endl << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "#### Aditional Tests ####"<< std::endl << std::endl;

	std::cout << std::endl << "**** Span with no space ****"<< std::endl;
	Span sp0 = Span(0);
	std::cout << "add number :";
	try
	{
		sp0.addNumber(5);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "content :" << std::endl; 
	try
	{
		sp0.printSpan();
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "shortest :" << sp0.shortestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "longest :" << sp0.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "**** Span with 2 space ****"<< std::endl;
	Span sp2 = Span(2);
	std::cout << "add number 1 :"<< std::endl;;
	try
	{
		sp2.addNumber(5);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "add number 2 :"<< std::endl;;
	try
	{
		sp2.addNumber(50);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "add number 3 :"<< std::endl;;
	try
	{
		sp2.addNumber(89);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "content :" << std::endl; 
	try
	{
		sp2.printSpan();
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "shortest :" << sp2.shortestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "longest :" << sp2.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "**** Span with 1 space ****"<< std::endl;
	Span sp1 = Span(1);
	std::cout << "add number 1 :"<< std::endl;;
	try
	{
		sp1.addNumber(5);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "add number 2 :"<< std::endl;;
	try
	{
		sp1.addNumber(50);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "add number 3 :"<< std::endl;;
	try
	{
		sp1.addNumber(89);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "content :" << std::endl; 
	try
	{
		sp1.printSpan();
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "shortest :" << sp1.shortestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "longest :" << sp1.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "**** Span creation with 10 value lspan 36 sspan 4 ****"<< std::endl;
	Span sp10p = Span(10);
	sp10p.addNumber(0);
	sp10p.addNumber(4);
	sp10p.addNumber(8);
	sp10p.addNumber(12);
	sp10p.addNumber(16);
	sp10p.addNumber(20);
	sp10p.addNumber(24);
	sp10p.addNumber(28);
	sp10p.addNumber(32);
	sp10p.addNumber(36);
	std::cout << "content :";
	sp10p.printSpan();
	std::cout << "shortest :" << sp10p.shortestSpan() << std::endl;
	std::cout << "longest :" << sp10p.longestSpan() << std::endl;

	std::cout << std::endl << "**** Span creation with 10 value random ****"<< std::endl;
	Span sp10 = Span(10);
	sp10.fillSpan();
	std::cout << "content :";
	sp10.printSpan();
	std::cout << "shortest :" << sp10.shortestSpan() << std::endl;
	std::cout << "longest :" << sp10.longestSpan() << std::endl;


	std::cout << std::endl << "**** Span creation with 10000 value random ****"<< std::endl;
	Span sp10000 = Span(10000);
	sp10000.fillSpan();
	/* std::cout << "content :";
	sp10000.printSpan(); */
	std::cout << "shortest :" << sp10000.shortestSpan() << std::endl;
	std::cout << "longest :" << sp10000.longestSpan() << std::endl;
	return 0;
}