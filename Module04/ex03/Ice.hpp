#ifndef _Ice_HPP_
#define _Ice_HPP_

#include <iostream>
#include "AMateria.hpp"

class	Ice :public AMateria
{
	public:
		Ice( void );
		~Ice( void );
		Ice( Ice const& rhs );
		Ice&	operator=( const Ice& rhs );
		AMateria*	clone( void ) const;
		void		use( ICharacter& target );
};


#endif
