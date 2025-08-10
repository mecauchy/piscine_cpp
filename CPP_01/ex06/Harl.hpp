#ifndef	HARL_H

#define HARL_H

#include <string>
#include <iostream>

#define C_RESET "\033[0m"
#define C_RED   "\033[0;31m"
#define C_BLUE  "\033[0;34m"
#define C_GREEN "\033[0;32m"
#define C_YELLOW "\033[1;33m"

class Harl
{
	public:
				Harl();
				~Harl();

				void complain( std::string level );
	private:
				void debug();
				void info();
				void warning();
				void error();
};

#endif