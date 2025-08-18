/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 09:54:28 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/16 12:22:25 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(2)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << C_RED << "ClapTrap Destructor called" << C_RESET << std::endl;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap &other )
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return ( *this );
}

ClapTrap::ClapTrap( const std::string &name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(2)
{
	std::cout << "ClapTrap Parameterized constructor called for " << _name << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &other ) : _name(other._name), _hitPoints(other._hitPoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage)
{
	std::cout << "ClapTrap Copy constructor called for " << _name << std::endl;
}

void	ClapTrap::attack( const std::string &target )
{
	if ( _hitPoints > 0 && _energyPoints > 0 )
	{
		_energyPoints--;
		std::cout << _name << " attacks " << target << " for " << _attackDamage << " damage!" << std::endl;
		std::cout << C_DARK_GRAY << _name << " used " << C_LIGHT_GRAY << "1 energy point " << C_DARK_GRAY << "for this attack"<< C_RESET << std::endl;
		std::cout << C_DARK_GRAY << "(Energy point : " << _energyPoints << ")" << C_RESET << std::endl;
	}
	else
	{
		std::cout << C_RED << _name << " cannot attack! No energy or HitPoint left." << C_RESET << std::endl;
	}
}

void		ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << C_DARK_GRAY << "hit point before attack : " << _hitPoints << C_RESET << std::endl;
	_hitPoints -= amount;
	std::cout << "ClapTrap " << _name << " takes damage of " << amount << " points! " << std::endl;
	std::cout << C_DARK_GRAY << "hit point after attack : " << _hitPoints << C_RESET << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints--;
		_hitPoints += amount;
		std::cout << _name << " is repaired by " << amount << " points! " << std::endl;
	}
	else
		std::cout << C_RED << _name << " has no energy points left to be repaired!" << C_RESET << std::endl;
}