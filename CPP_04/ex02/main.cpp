/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:45:00 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/22 10:29:27 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << C_YELLOW << "=== CPP_04 ex02 - Classe Abstraite ===" << C_RESET << std::endl;
	
	std::cout << C_YELLOW << "\n--- Test basique ---\n" << C_RESET << std::endl;
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	
	j->makeSound(); // Woaf
	i->makeSound(); // Meow
	
	delete j;
	delete i;
	
	std::cout << C_YELLOW << "\n--- Tableau d'animaux ---\n" << C_RESET << std::endl;
	const int SIZE = 4;
	AAnimal* animals[SIZE];
	
	// Moitié Dog, moitié Cat
	for (int i = 0; i < SIZE / 2; i++)
		animals[i] = new Dog();
	for (int i = SIZE / 2; i < SIZE; i++)
		animals[i] = new Cat();
	
	// Sons + destruction via pointeurs AAnimal*
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << animals[i]->getType() << ": ";
		animals[i]->makeSound();
		delete animals[i];
	}
	
	// Test 4: Copie profonde
	std::cout << C_YELLOW << "\n--- Copie profonde ---\n" << C_RESET << std::endl;
	Dog original;
	original.getBrain()->setIdea(1, "Original idea");
	
	Dog copy = original;
	copy.getBrain()->setIdea(1, "Modified idea");

	std::cout << "Original: " << original.getBrain()->getIdea(1) << std::endl;
	std::cout << "Copy: " << copy.getBrain()->getIdea(1) << std::endl;

	return 0;
}
