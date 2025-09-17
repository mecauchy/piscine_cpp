/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 18:27:16 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/09/16 18:41:42 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{}

Serializer::Serializer(const Serializer &other)
{
	(void)other; // No member variables to copy
}
Serializer&	Serializer::operator=(const Serializer &other)
{
	(void)other; // No member variables to copy
	return ( *this );
}


/*
 * uintptr_t est un type entier non signe capable de contenir une adresse mémoire.
 * reinterpret_cast est utilisé pour convertir un pointeur de type Data* en un entier/nb brut de type uintptr_t.
 */
uintptr_t	Serializer::serialize(Data* ptr)
{
	return ( reinterpret_cast<uintptr_t>(ptr) );
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return ( reinterpret_cast<Data*>(raw) );
}

Serializer::~Serializer()
{}
