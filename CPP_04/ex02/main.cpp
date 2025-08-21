/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:45:00 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/20 16:57:31 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << C_YELLOW << "\n\t\t=== Test basique demandé ===\n" << C_RESET << std::endl;
	
	// Test basique demandé dans le sujet
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	
	delete j; // should not create a leak
	delete i;

	std::cout << C_YELLOW << "\n\t\t=== Test tableau AAnimal ===\n" << C_RESET << std::endl;
	
	// Tableau d'animaux (moitié Dog, moitié Cat)
	const int SIZE = 4;
	AAnimal* AAnimals[SIZE];
	
	for (int idx = 0; idx < SIZE / 2; idx++)
		AAnimals[idx] = new Dog();
	
	for (int idx = SIZE / 2; idx < SIZE; idx++)
		AAnimals[idx] = new Cat();
	
	// Test des sons
	for (int idx = 0; idx < SIZE; idx++)
	{
		std::cout << AAnimals[idx]->getType() << ": ";
		AAnimals[idx]->makeSound();
	}
	
	// Destruction
	for (int idx = 0; idx < SIZE; idx++)
		delete AAnimals[idx];
	
	std::cout << C_YELLOW << "\n\t\t=== Test copie profonde ===\n" << C_RESET << std::endl;
	
	// Test copie profonde
	Dog basic;
	basic.getBrain()->setIdea(0, "Original idea");
	
	Dog copy = basic; // Copy constructor
	copy.getBrain()->setIdea(0, "Modified idea");
	
	std::cout << "Original: " << basic.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy: " << copy.getBrain()->getIdea(0) << std::endl;
	
	// Test assignation
	Cat cat1;
	Cat cat2;
	cat1.getBrain()->setIdea(0, "Cat original");
	cat2 = cat1;
	cat2.getBrain()->setIdea(0, "Cat modified");
	
	std::cout << "Cat1: " << cat1.getBrain()->getIdea(0) << std::endl;
	std::cout << "Cat2: " << cat2.getBrain()->getIdea(0) << std::endl;
	
	std::cout << C_YELLOW << "\n\t\t=== Test Brain ideas ===\n" << C_RESET << std::endl;
	
	// Test Brain
	Dog smartDog;
	smartDog.getBrain()->setIdea(0, "Chase ball");
	smartDog.getBrain()->setIdea(1, "Bark loud");
	smartDog.getBrain()->setIdea(99, "Last idea");
	
	std::cout << "Dog idea 0: " << smartDog.getBrain()->getIdea(0) << std::endl;
	std::cout << "Dog idea 1: " << smartDog.getBrain()->getIdea(1) << std::endl;
	std::cout << "Dog idea 99: " << smartDog.getBrain()->getIdea(99) << std::endl;
	
	// Test erreur
	smartDog.getBrain()->setIdea(100, "Invalid");
	smartDog.getBrain()->getIdea(150);
	
	return 0;
}
