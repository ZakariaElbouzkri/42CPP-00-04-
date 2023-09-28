#ifndef _WrongAnimal_HPP_
#define _WrongAnimal_HPP_

#include <iostream>

class	WrongAnimal
{

	protected:
		std::string _type;
	public:
		WrongAnimal( void );
		WrongAnimal( std::string type );
		~WrongAnimal( void );
		WrongAnimal( WrongAnimal const& rhs );
		WrongAnimal&	operator=( const WrongAnimal& rhs );
		std::string		getType( void ) const;
		void			makeSound( void ) const;
};

#endif
