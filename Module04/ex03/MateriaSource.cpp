/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 02:03:13 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/10/06 07:38:39 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource( void ) 
{
	for (int i=0; i < N; i++){
		_inventory[i] = NULL;
	}
	std::cout << "MateriaSource created\n";
}

MateriaSource::~MateriaSource( void )
{
	for (int i=0; i < N; i++){
		delete _inventory[i];
	}
	std::cout << "MateriaSource destroyed\n";
}

MateriaSource::MateriaSource( MateriaSource const& rhs )
{
	for (int i=0; i < N; i++){
		_inventory[i] = NULL;
		if (rhs._inventory[i] != NULL)
			_inventory[i] = rhs._inventory[i]->clone();
	}
	std::cout << "MateriaSource created with copy constructor\n";
}

MateriaSource&	MateriaSource::operator=( const MateriaSource& rhs )
{
	if (this != &rhs){
		for (int i=0; i < N; i++){
			delete _inventory[i];
			_inventory[i] = NULL;
			if (rhs._inventory[i] != NULL)
				_inventory[i] = rhs._inventory[i]->clone();
		}
		std::cout << "MateriaSource copied with copy operator\n";
	}
	return (*this);
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i=0; i < N; i++){
		if (_inventory[i]->getType() == type){
			return (_inventory[i]->clone());
		}
	}
	return (NULL);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i=0; i < N; i++){
		if (_inventory[i] == NULL){
			_inventory[i] = m;
			break;
		}
	}	
}