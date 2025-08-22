/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 17:16:38 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/22 11:03:17 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _count(0)
{
	for ( int i = 0; i < 4; i++ )
		_materia[i] = NULL;
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource &other ) : _count(other._count)
{
	_copyMateria( other );
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource&	MateriaSource::operator=( const MateriaSource &other )
{
	if ( this != &other )
	{
		_clearMateria();
		_count = other._count;
		_copyMateria( other );
	}
	return ( *this );
}


/*
	-> fonction qui permet d'apprendre a faire un Materia
*/
void	MateriaSource::learnMateria( AMateria *m )
{
	if (!m)
	{
		std::cerr << "Cannot learn null Materia" << std::endl;
		return ;
	}
	if ( _count >= 4 )
	{
		std::cerr << "MateriaSource is full" << std::endl;
		return ;
	}
	_materia[_count] = m->clone();
	_count++;
	std::cout << "learned " << m->getType() << " at index : " << _count << std::endl;
}

AMateria*	MateriaSource::createMateria( std::string const &type )
{
	for (int i = 0; i < _count; i++)
	{
		if ( _materia[i] && _materia[i]->getType() == type )
		{
			std::cout << "AMateria " << _materia[i]->getType() << " created" << std::endl;
			return ( _materia[i]->clone() );
		}
	}
	std::cerr << "Cannot create Amateria " << type << std::endl;
	return (NULL);
}

void	MateriaSource::_clearMateria()
{
	for ( int i = 0; i < 4; i++ )
	{
		if ( _materia[i] )
		{
			delete _materia[i];
			_materia[i] = NULL; 
		}
	}
}

void	MateriaSource::_copyMateria( const MateriaSource &other )
{
	for ( int i = 0; i < 4; i++ )
	{
		if ( i < other._count && other._materia[i] )
			_materia[i] = other._materia[i]->clone();
		else
			_materia[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	_clearMateria();
	std::cout << "MateriaSource destructor called" << std::endl;
}