/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 18:01:14 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/22 11:20:29 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	std::cout << "=== CPP_04 ex03 - Basic Tests ===" << std::endl;

	// Test 1: Subject example
	std::cout << "\n--- Subject Test ---" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		
		AMateria* iceTemplate = new Ice();
		AMateria* cureTemplate = new Cure();
		src->learnMateria(iceTemplate);
		src->learnMateria(cureTemplate);
		delete iceTemplate;
		delete cureTemplate;
		
		ICharacter* me = new Character("me");
		AMateria* tmp;
		
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		
		ICharacter* bob = new Character("bob");
		
		me->use(0, *bob);
		me->use(1, *bob);
		
		delete bob;
		delete me;
		delete src;
	}

	// Test 2: Basic functionality
	std::cout << "\n--- Basic Test ---" << std::endl;
	{
		Character alice("Alice");
		Character bob("Bob");
		
		alice.equip(new Ice());
		alice.equip(new Cure());
		
		alice.use(0, bob);
		alice.use(1, bob);
	}

	std::cout << "\n--- Tests finished ---" << std::endl;
	return 0;
}
