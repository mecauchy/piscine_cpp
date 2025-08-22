#ifndef BRAIN_HPP

#define BRAIN_HPP

# include <string>
# include <iostream>

#define C_RESET "\033[0m"
#define C_RED   "\033[0;31m"
#define C_GREEN "\033[0;32m"
#define C_YELLOW "\033[1;33m"
#define C_DARK_GRAY "\033[90m"
#define C_LIGHT_GRAY "\033[37m"

class Brain
{
	public:
				Brain();
				Brain( const Brain &other );
				Brain&	operator=( const Brain &other );
				~Brain();

				void	setIdea( unsigned int index, const std::string &idea );
				std::string	getIdea( unsigned int index ) const;

	private:
				std::string	_ideas[100];
};

#endif