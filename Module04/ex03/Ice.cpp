#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice( void ) : AMateria("ice")
{
	std::cout << "Ice Default constructor called\n";
}

Ice::~Ice( void )
{
	std::cout << "Ice Destructor called\n";
}

Ice::Ice( Ice const& rhs ) : AMateria("ice")
{
	std::cout << "Ice Copy constructor called\n";
	*this = rhs;
}

Ice&	Ice::operator=( const Ice& rhs )
{
	std::cout << "Copy assignment operator called\n";
	if (this != &rhs){
		_type = rhs._type;
	}
	return (*this);
}

AMateria*	AMateria::clone( void ) const
{
	std::cout << "Ice clone member function called\n";
	AMateria*	obj = new Ice();
	return (obj);
}

void		use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*\n";
}

