/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 18:50:18 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/09/17 10:48:35 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data		data;
	Data*		dataPtr;
	uintptr_t	raw;

	data.id = 16;
	data.name = "Melissa";
	std::cout << std::endl << C_YELLOW << "\t\t\t ===== BEFORE SERIALIZATION =====" << C_RESET << std::endl << std::endl;
	std::cout << "Original Data address\t\t:\t" << &data << std::endl;
	std::cout << "Original Data id\t\t:\t" << data.id << std::endl;
	std::cout << "Original Data name\t\t:\t" << data.name << std::endl;

	std::cout << std::endl << C_YELLOW << "\t\t\t\t ===== SERIALIZATION =====" << C_RESET << std::endl << std::endl;
	raw = Serializer::serialize(&data);
	std::cout << std::endl << "Serialized Data (as uintptr_t): " << raw << std::endl;

	std::cout << std::endl << C_YELLOW << "\t\t\t ===== DESERIALIZATION =====" << C_RESET << std::endl << std::endl;
	dataPtr = Serializer::deserialize(raw);
	std::cout << "Deserialized Data address\t:\t" << dataPtr << std::endl;
	std::cout << "Deserialized Data id\t\t:\t" << dataPtr->id << std::endl;
	std::cout << "Deserialized Data name\t\t:\t" << dataPtr->name << std::endl;

	return (0);
}	