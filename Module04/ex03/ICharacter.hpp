#ifndef _ICharacter_HPP_
#define _ICharacter_HPP_

#include <iostream>
#include "AMateria.hpp"

class	Amateria;
class	ICharacter
{
	public:
		virtual	~ICharacter() {}
		virtual	std::string const& getName( void ) const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual	void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif
