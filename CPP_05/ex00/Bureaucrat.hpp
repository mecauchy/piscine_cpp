#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>

#define C_RESET "\033[0m"
#define C_RED   "\033[0;31m"
#define C_GREEN "\033[0;32m"
#define C_BLUE "\033[0;34m"
#define C_YELLOW "\033[1;33m"
#define C_DARK_GRAY "\033[90m"
#define C_LIGHT_GRAY "\033[37m"

class Bureaucrat 
{
	public:
				Bureaucrat(const std::string& name, int grade);
				Bureaucrat(const Bureaucrat& other);
				Bureaucrat& operator=(const Bureaucrat& other);
				~Bureaucrat();

				const std::string&	getName() const;
				int					getGrade() const;
				void				setGrade(int grade);
				void				incrementGrade();
				void				decrementGrade();


// la méthode what() est une méthode virtuelle que tu peux redéfinir (override).
// Elle est utilisée pour fournir une description de l'exception lorsqu'elle est lancée.
	class GradeTooHighException : public std::exception
	{
		public:
				const char* what() const throw()
				{
					return ("Grade is too high");
				}
	};

	class GradeTooLowException : public std::exception
	{
		public:
				const char* what() const throw()
				{
					return ("Grade is too low");
				}
	};

	private:
				const std::string	_name;
				int					_grade;
				void				_checkGrade() const;

			};
			
	std::ostream& operator<<(std::ostream& os, const Bureaucrat& other);

#endif