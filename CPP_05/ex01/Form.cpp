/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 16:22:59 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/23 17:17:29 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( const std::string &name, const int gradeToSign, const int gradeToExecute ) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if ( gradeToSign < 1 || gradeToExecute < 1 )
		throw Form::GradeTooHighException();
	if ( gradeToSign > 150 || gradeToExecute > 150 )
		throw Form::GradeTooLowException();
	std::cout << _name << " constructor called with the grade to sign : " << _gradeToSign << "and grade to execute : " << _gradeToExecute << std::endl;
}

Form::Form( const Form &other ) : _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
	std::cout << "Form copy cconstructor called" << std::endl;
}

// on ne copie que isSigned car les autres attributs sont const -> donc impossible
Form&	Form::operator=( const Form &other )
{
	if ( this != &other )
		_isSigned = other._isSigned;
	return ( *this );
}

const std::string	&Form::getName() const
{
	return ( _name );
}

bool	Form::getIsSigned() const
{
	return ( _isSigned );
}

int	Form::getGradeToSign() const
{
	return ( _gradeToSign );
}

int	Form::getGradeToExecute() const
{
	return ( _gradeToExecute );
}

void	Form::beSigned( const Bureaucrat &bureaucrat )
{
	if ( bureaucrat.getGrade() > _gradeToSign)
		throw Form::GradeTooLowException();
	_isSigned = true;
}

std::ostream&	operator<<( std::ostream os, const Form &other )
{
	os << "Form : " << other.getName() << " grade to sign = " << other.getGradeToSign() << " grade to execute " << other.getGradeToExecute() << " sign : " << other.getIsSigned() ;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}