/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:26:02 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/25 11:13:37 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat( void ) : Animal("Cat")
{
	_brain = new Brain();
	std::cout << "{Cat} constructor called\n";
}

Cat::~Cat( void )
{
	std::cout << "{Cat} Destructor called\n";
	delete _brain;
}

Cat::Cat( Cat const& rhs )
{
	std::cout << "{Cat} Copy constructor called\n";
	if (this != &rhs)
	{
		_brain = new Brain();
		*_brain = *rhs._brain;
		_type = rhs._type;
	}
}

Cat&	Cat::operator=( const Cat& rhs )
{
	std::cout << "{Cat} Copy assignment operator called\n";
	if (this != &rhs){
		delete _brain;
		_brain = new Brain;
		*_brain = *rhs._brain;
		_type = rhs._type;
	}
	return (*this);
}

void	Cat::makeSound( void ) const{
	std::cout << "{Cat} sound...\n";
}
