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

void	Harl::complain( std::string level )
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4 && levels[i] != level)
		i++;
	switch (i)
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		default:
			std::cout << C_RED << "[ Probably complaining about insignificant problems ]" << C_RESET << std::endl;
			break;
	}
}