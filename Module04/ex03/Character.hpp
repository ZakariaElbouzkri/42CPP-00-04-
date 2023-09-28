#ifndef _Character_HPP_
#define _Character_HPP_

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

#define N 4

class	Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[N];
		int			_currIdx;
	public:
		Character( std::string name );
		~Character( void );
		Character( Character const& rhs );
		Character&	operator=( const Character& rhs );
		std::string const&	getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif
