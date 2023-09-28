#include "Asettar.hpp"


Asettar::Asettar( void )
{
	std::cout << "Default constructor called\n";
}

Asettar::~Asettar( void )
{
	std::cout << "Destructor called\n";
}

Asettar::Asettar( Asettar const& rhs )
{
	std::cout << "Copy constructor called\n";
	*this = rhs;
}

Asettar&	Asettar::operator=( const Asettar& rhs )
{
	std::cout << "Copy assignment operator called\n";
	if (this != &rhs){

	}
	return (*this);
}
