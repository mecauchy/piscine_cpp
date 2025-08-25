/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 16:22:12 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/23 17:22:04 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP

#define FORM_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class	Form 
{
	public:
				Form( const std::string &name, const int gradeToSign, const int gradeToExecute );
				Form( const Form& other );
				Form& operator=( const Form& other );
				~Form();

				const std::string&	getName() const;
				bool				getIsSigned() const;
				int					getGradeToSign() const;
				int					getGradeToExecute() const;
				void				beSigned( const Bureaucrat& bureaucrat );

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
				bool				_isSigned;
				const int			_gradeToSign;
				const int			_gradeToExecute;
				void				_checkGrade( int grade ) const;

	};

	std::ostream& operator<<(std::ostream& os, const Form &other);
