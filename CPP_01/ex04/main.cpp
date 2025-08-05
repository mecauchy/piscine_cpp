/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:06:31 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/05 14:54:56 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


#define C_RESET	"\033[0m"
#define C_RED	"\033[1;31m"
#define C_GREEN	"\033[1;32m"

/*
	lire le fichier d'entree : std::ifstream
	is_open() / fail() / getline()

	ecrire dans le fichier de sortie : std::ofstream
	is_open() fail() <<

	find(s1, pos) -> trouver la prochaine 	occurence de s1 a partir de pos
	insert()
	erase()

	size() / lenght -> longueur de la chaine

	 empty() -> verifie si la chaine est vide 
*/

void	replace( std::ifstream &input, const std::string &s1, const std::string s2, const std::string &name)
{
	std::ofstream	output((name + ".replace").c_str(), std::ofstream::out);
	if (!output)
	{
		std::cout << "Error : Cannot open file." << std::endl;
	}
	std::string		line;
	size_t			pos = 0;
	while (std::getline(input, line))
	{
		pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		output << line << std::endl;
	}
}

int	main( int ac, char **av )
{
	if (ac != 4)
	{
		std::cerr << "Error : it must be 4 arguments " << C_RED << "<input >  < search >  < replace >" << C_RESET << std::endl;
		return (1);
	}
	std::ifstream	input(av[1]);
	std::string		old = av[2];
	std::string		newName = av[3];
	replace(input, old, newName, av[1]);
	return (0);
}