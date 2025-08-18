/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 16:09:10 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/18 13:06:23 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap( "ScavTrap" )
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap( const std::string &name ) : ClapTrap( name )
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap Parameterized constructor called for " << _name << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &other ) : ClapTrap( other )
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap Copy constructor called for " << _name << std::endl;
}

ScavTrap&	ScavTrap::operator=( const ScavTrap &other )
{
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
}

void	ScavTrap::attack( const std::string &target )
{
	if ( _hitPoints > 0 && _energyPoints > 0 )
	{
		_energyPoints--;
		std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage! " << std::endl;
		std::cout << C_DARK_GRAY << "ScavTrap used " << C_LIGHT_GRAY << "1 energy point " << C_DARK_GRAY << "for this attack"<< C_RESET << std::endl;
		std::cout << C_DARK_GRAY << "(Energy point : " << _energyPoints << ")" << C_RESET << std::endl;
	}
	else
	{
		std::cout << C_RED << "ScavTrap " << _name << " is too exhausted to attack! ";
		std::cout << "(Hit point: " << _hitPoints << ", Energy: " << _energyPoints << ")" << C_RESET << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << C_RED <<"ScavTrap destructor called" << C_RESET << std::endl;
}

