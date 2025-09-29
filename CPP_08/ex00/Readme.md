====== CPP08 ======


=== EX00 ===

# Subject: Easyfind

## Instructions
- Create a function template called `easyfind` that takes a container (e.g., vector, list) and an integer value as parameters.
- The function should search for the integer value in the container and return an iterator to the found element.
- If the element is not found, the function should throw a `std::runtime_error` exception.
- You are allowed to use standard library functions such as `std::find`.
- Test your function with different types of containers (e.g., `std::vector`, `std::list`) and various integer values.

=== NOTES ===

- but de l'exercice : Apprendre à utiliser les templates et les exceptions en C++.
manipuler les containers de la STL (Standard Template Library).

- la fonction easyfind fonctionne avec n'importe quel container qui supporte les itérateurs (comme std::vector, std::list, etc.).
exemple : std::vector<int> vec = {1, 2, 3, 4, 5};
		  std::list<int> lst = {10, 20, 30, 40, 50};
		  std::deque<int> deq = {100, 200, 300, 400, 500};
		  std::set<int> s = {1000, 2000, 3000, 4000, 5000};

- la fonction easyfind doit lancer une exception si l'élément n'est pas trouvé.

- la fonction std::find de la bibliothèque standard permet de rechercher l'élément dans le container.