#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure( void ) : AMateria("cure")
{
	std::cout << "Cure Default constructor called\n";
}

Cure::~Cure( void )
{
	std::cout << "Cure Destructor called\n";
}

Cure::Cure( Cure const& rhs ) : AMateria("cure")
{
	std::cout << "Cure Copy constructor called\n";
}

Cure&	Cure::operator=( const Cure& rhs )
{
	std::cout << "Cure Copy assignment operator called\n";
	if (this != &rhs){
		_type = rhs._type;
	}
	return (*this);
}

AMateria*	Cure::clone( void ) const
{
	std::cout << "Cure clone member function called\n";
	AMateria*	obj = new Cure();
	return (obj);
}

void		Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}
