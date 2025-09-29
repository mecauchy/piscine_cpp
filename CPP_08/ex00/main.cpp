/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 12:31:18 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/09/28 12:44:10 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"

int	main( void )
{
	std::cout << std::endl;
	try
	{
		std::vector<int> vec;
		vec.push_back(1);
		vec.push_back(2);
		vec.push_back(3);
		vec.push_back(4);
		vec.push_back(5);
		std::cout << C_YELLOW << "Searching in vector..." << C_RESET << std::endl;
		std::vector<int>::iterator it = easyfind(vec, 3);
		std::cout << C_GREEN << "Found: " << *it << C_RESET << std::endl;
		it = easyfind(vec, 6); // This will throw an exception
		std::cout << C_GREEN << "Found: " << *it << C_RESET << std::endl;
	}
		catch (const std::exception &e)
	{
		std::cerr << C_RED << e.what() << C_RESET << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << C_YELLOW << "Searching in list..." << C_RESET << std::endl;
		std::list<int> lst;
		lst.push_back(10);
		lst.push_back(20);
		lst.push_back(30);
		lst.push_back(40);
		lst.push_back(50);
		std::list<int>::iterator it = easyfind(lst, 20);
		std::cout << C_GREEN << "Found: " << *it << C_RESET << std::endl;
		it = easyfind(lst, 60); // This will throw an exception
		std::cout << C_GREEN << "Found: " << *it << C_RESET << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << C_RED << e.what() << C_RESET << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << C_YELLOW << "Searching in deque..." << C_RESET << std::endl;
		std::deque<int> deq;
		deq.push_back(100);
		deq.push_back(200);
		deq.push_back(300);
		deq.push_back(400);
		deq.push_back(500);
		std::deque<int>::iterator it = easyfind(deq, 300);
		std::cout << C_GREEN << "Found: " << *it << C_RESET << std::endl;
		it = easyfind(deq, 600); // This will throw an exception
		std::cout << C_GREEN << "Found: " << *it << C_RESET << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << C_RED << e.what() << C_RESET << std::endl;
	}
}