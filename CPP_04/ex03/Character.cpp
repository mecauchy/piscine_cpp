/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 14:57:31 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/22 10:49:56 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"

Character::Character() : _name("Default")
{
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
}

Character::Character( std::string const &name ) : _name(name)
{
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
}

Character::Character( Character const &other ) : _name(other._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (other._inventory[i])
			_inventory[i] = other._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
}

/*
but : vider l'inventaire perso avant toute recopie != fuite mempoire
puis on copie les donnees de other dans notre _inventory
*/

Character&	Character::operator=( const Character &other )
{
	if (this != &other)
	{
		_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
			{
				delete _inventory[i];
				_inventory[i] = NULL;
			}
		}
		for ( int i = 0; i < 4; i++)
		{
			if ( other._inventory[i] )
					_inventory[i] = other._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return ( *this );
}

std::string	const &Character::getName() const
{
	return ( _name );
}

/*
	-> range la Materia dans le premier espace vide dispo
*/

void	Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for ( int i = 0; i < 4; i++ )
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			std::cout << this->getName() << " equipped " << m->getType() << " at index : " << i << std::endl;
			return ;
		}
	}
	std::cout << C_RED << "Sorry, the inventory is full" << C_RESET << std::endl;
}

/*
	-> Retire la Materia du slot demande (idx), en remplacant par null
	verifie si l'idx est bien etre la taille min et max du tableau
*/
void	Character::unequip( int idx )
{
	if ( idx >= 0 && idx < 4 )
	{
		_inventory[idx] = NULL;
	}
	else
		std::cout << C_RED << "Please enter a valid index < 0 - 3 >" << std::endl;
}

/*
	-> permet d'utiliser ces Materias en fct de l'index
*/
void	Character::use( int idx, ICharacter& target )
{
	if ( idx >= 0 && idx < 4 && _inventory[idx] )
		_inventory[idx]->use(target);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		delete _inventory[i];
	}
	std::cout << C_RED << "Character destructor called" << C_RESET << std::endl;
}