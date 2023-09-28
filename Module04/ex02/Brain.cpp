/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 09:58:40 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/25 10:35:57 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain( void )
{
	std::cout << "Brain Default constructor called\n";
	_currIdx = 0;
}

Brain::~Brain( void )
{
	std::cout << "Brain Destructor called\n";
}

Brain::Brain( Brain const& rhs )
{
	std::cout << "Brain Copy constructor called\n";
	*this = rhs;
}

Brain&	Brain::operator=( const Brain& rhs )
{
	std::cout << "Brain Copy assignment operator called\n";
	if (this != &rhs){
		for (int i=0; i < 100; i++){
			this->_ideas[i] = rhs._ideas[i];
		}
	}
	return (*this);
}

void	Brain::setIdea( std::string idea )
{
	std::cout << "Brain SetIdea Member func called\n";
	if (idea.empty())
		return ;
	_ideas[_currIdx] = idea;
	_currIdx = (_currIdx + 1) % 100;
}

void	Brain::displayIdeas( void ) const
{
	std::cout << "Display Ideas Member func called\n";
	for (int i=0; i < 100 && !_ideas[i].empty(); i++)
	{
		std::cout << "Idea [" << i << "]" << _ideas[i] << '\n';
	}
}
	