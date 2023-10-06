/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 01:35:20 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/10/06 07:30:38 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character( std::string name ) : _name(name)
{
	for (int i=0; i < N; i++)
	{
		_inventory[i] = NULL;
	}
	std::cout << "Character created with name: " << _name << '\n';
}

Character::~Character( void )
{
	for (int i=0; i < N; i++){
		delete _inventory[i];
	}
	std::cout << "Character name: " << _name << "destroyed\n";
}

Character::Character( Character const& rhs ) : _name(rhs._name)
{
	for (int i=0; i < N; i++){
			_inventory[i] = NULL;
		if (rhs._inventory[i] != NULL){
			_inventory[i] = rhs._inventory[i]->clone();
		}
	}
	std::cout << "Character " << _name << "created with copy constructor\n";
}

Character&	Character::operator=( const Character& rhs )
{
	if (this != &rhs){
		_name = rhs._name;
		for (int i=0; i < N; i++){
			delete _inventory[i];
			_inventory[i] = NULL;
			if (rhs._inventory[i] != NULL)
				_inventory[i] = rhs._inventory[i]->clone();
		}
		std::cout << "Character name : " << _name << " copied from : " << rhs._name;
		std::cout << "with copy operator\n";
	}
	return (*this);
}

std::string const& Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria* m)
{
	for (int i=0; i < N; i++){
		if (_inventory[i] == NULL){
			_inventory[i] = m;
			break;
		}
	}	
}

void	Character::unequip(int idx)
{
	for (int i=0; i < 4; i++){
		if (i == idx){
			_inventory[i] = NULL;
			break;
		}
	}
}

void	Character::use(int idx, ICharacter& target)
{
	for (int i=0; i < N; i++){
		if (i == idx && _inventory[i] != NULL){
			_inventory[i]->use(target);
			break;
		}
	}
}

