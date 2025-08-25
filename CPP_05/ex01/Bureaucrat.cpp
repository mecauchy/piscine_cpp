/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 11:24:53 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/23 17:27:56 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade)
{
	_checkGrade();
	std::cout << C_DARK_GRAY << "Bureaucrat " << _name << " constructed with grade " << _grade << C_RESET<< std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade)
{
	_checkGrade();
	std::cout << C_DARK_GRAY << "Bureaucrat " << _name << " copy-constructed" << C_RESET << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
	{
		// _name is const, so we don't assign it
		_grade = other._grade;
		_checkGrade();
	}
	std::cout << C_DARK_GRAY << "Bureaucrat " << _name << " assigned" << C_RESET << std::endl;
	return ( *this );
}

void	Bureaucrat::_checkGrade() const
{
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
}

const std::string&	Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::setGrade(int grade)
{
	_grade = grade;
	_checkGrade();
}

void	Bureaucrat::incrementGrade()
{
	_grade--;
	_checkGrade();
	std::cout << _name << "'s grade is now : " << C_GREEN << _grade << C_RESET << std::endl;
}

void	Bureaucrat::decrementGrade()
{
	_grade++;
	_checkGrade();
	std::cout << _name << "'s grade is now : " << C_RED << _grade << C_RESET << std::endl;
}

// void	Bureaucrat::signForm( Form &f )
// {
// 	try
// 	{
// 		f.beSigned( )
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
	
// }

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& other)
{
	os << other.getName() << " bureaucrat grade " << other.getGrade();
	return ( os );
}

Bureaucrat::~Bureaucrat()
{
	std::cout << C_DARK_GRAY << "Bureaucrat " << _name << " destructed" << C_RESET << std::endl;
}