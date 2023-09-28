#include "Character.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"

Character::Character( std::string name ) : _name(name)
{
	std::cout << "Character Default constructor called\n";
	_currIdx = 0;
	for (int i=0; i < N; i++)
	{
		_inventory[i] = NULL;
	}
}

Character::~Character( void )
{
	std::cout << "Character Destructor called\n";
	int idx = 0;
	while (_inventory[idx])
	{
		delete _inventory[idx];
		idx++;
	}
}

Character::Character( Character const& rhs )
{
	std::cout << "Character Copy constructor called\n";
	_currIdx = 0;
	if (this != rhs)
	{
		while (rhs._inventory[_currIdx])
		{
			*_inventory[_currIdx] = *rhs._inventory[_currIdx];
			_currIdx = (_currIdx + 1) % 4;
		}
	}
}

Character&	Character::operator=( const Character& rhs )
{
	std::cout << "Character Copy assignment operator called\n";
	if (this != &rhs){
		int i = 0;
		while (_inventory[i])
			delete _inventory[i];
		_currIdx = 0;
		while (rhs._inventory[_currIdx])
		{
			_inventory[_currIdx] = rhs._inventory[_currIdx];
			_currIdx++;
		}
	}
	return (*this);

}

std::string const& Character::getName( void ) const
{
	return (_name);
}

void	Character::equip(AMateria* m)
{
	if (_currIdx >= N)
		return ;
	_inventory[_currIdx++] = m;
}

void	ICharacter::unequip(int idx)
{
	
}



