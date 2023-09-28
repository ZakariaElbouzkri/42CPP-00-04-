#ifndef _AMateria_HPP_
#define _AMateria_HPP_

#include <iostream>
#include "ICharacter.hpp"


class	AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria( std::string const& type );
		virtual	~AMateria( void );
		AMateria( AMateria const& rhs );
		AMateria&	operator=( const AMateria& rhs );

		std::string	const&	getType() const; // returns the materia type
		virtual	AMateria*	clone() const = 0;
		virtual	void		use( ICharacter& target );
};

#endif
