#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main() {
	std::cout << "=== Test basique de MutantStack ===" << std::endl;
	MutantStack<int> mstack;

	// Test d'ajout d'éléments
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top element: " << mstack.top() << std::endl;

	mstack.pop();
	std::cout << "Size after pop: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << "Final size: " << mstack.size() << std::endl;

	// Test des itérateurs (fonctionnalité principale)
	std::cout << "\n=== Test des itérateurs ===" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	std::cout << "Elements dans la pile:" << std::endl;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}

	// Test de copie (standard stack behavior)
	std::cout << "\n=== Test de copie ===" << std::endl;
	std::stack<int> s(mstack);
	std::cout << "Stack copiée, size: " << s.size() << std::endl;

	// Test de constructeur de copie
	MutantStack<int> copy(mstack);
	std::cout << "MutantStack copié, size: " << copy.size() << std::endl;

	// Comparaison avec std::list (même comportement d'itération)
	std::cout << "\n=== Comparaison avec std::list ===" << std::endl;
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);

	std::list<int>::iterator lit = lst.begin();
	std::list<int>::iterator lite = lst.end();

	std::cout << "Elements dans la liste:" << std::endl;
	while (lit != lite) {
		std::cout << *lit << std::endl;
		++lit;
	}

	return 0;
}