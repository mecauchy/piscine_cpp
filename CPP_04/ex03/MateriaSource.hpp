#ifndef MATERIASOURCE_HPP

#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	public:
				MateriaSource();
				MateriaSource( const MateriaSource &other );
				~MateriaSource( void );

				MateriaSource&	operator=( const MateriaSource &other );

				void learnMateria(AMateria *m);
				AMateria* createMateria(std::string const & type);

	private:
				AMateria	*_materia[4];
				int			_count;
				void		_clearMateria();
				void		_copyMateria( const MateriaSource &other );

};

#endif