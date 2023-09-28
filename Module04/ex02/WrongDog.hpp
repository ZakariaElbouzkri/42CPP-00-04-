#ifndef _WrongDog_HPP_
#define _WrongDog_HPP_

#include <iostream>
#include "WrongAnimal.hpp"

class	WrongDog : public WrongAnimal
{

	public:
		WrongDog( void );
		~WrongDog( void );
		WrongDog( WrongDog const& rhs );
		WrongDog&	operator=( const WrongDog& rhs );
		void	makeSound( void ) const;
};

#endif
