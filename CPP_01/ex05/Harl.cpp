/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 11:03:01 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/08 13:01:59 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << C_GREEN << "Harl object created." << C_RESET << std::endl;
}

Harl::~Harl()
{
	std::cout << C_RED << "Harl object destroyed." << C_RESET << std::endl;
}

void Harl::debug()
{
	std::cout << C_YELLOW << "[DEBUG]" << C_RESET << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
}

void Harl::info()
{
std::cout << C_YELLOW << "[INFO]" << C_RESET << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't put enough bacon in my burger!" << std::endl;
	std::cout << "you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << C_YELLOW << "[WARNING]" << C_RESET << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout <<  "I've been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error()
{
	std::cout << C_YELLOW << "[ERROR]" << C_RESET << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	int i;
	struct LevelFunction
	{
		std::string levelName;
		void (Harl::*function)();
	};
	
	LevelFunction levels[] = {
		{"DEBUG", &Harl::debug},
		{"INFO", &Harl::info},
		{"WARNING", &Harl::warning},
		{"ERROR", &Harl::error}
	};

	for (i  = 0; i < 4; ++i)
	{
		if (levels[i].levelName == level)
		{
			(this->*(levels[i].function))();
			return;
		}
	}
	std::cout << C_YELLOW << "[UNKNOWN LEVEL]" << C_RESET << std::endl;
	std::cout << "No matching level found for: " << level << std::endl << std::endl;
}