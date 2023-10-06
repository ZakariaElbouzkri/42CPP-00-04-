#include "Ice.hpp"


Ice::Ice( void ) : AMateria("ice")
{
	std::cout << "Ice created\n";
}

Ice::~Ice( void )
{
	std::cout << "Ice destroyed\n";
}

Ice::Ice( Ice const& rhs ) : AMateria("ice")
{
	(void)rhs;
	std::cout << "Ice created with copy constructor\n";
}

Ice&	Ice::operator=( const Ice& rhs )
{
	(void)rhs;
	std::cout << "Ice copied with copy operator\n";
	return (*this);
}

Ice*	Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}