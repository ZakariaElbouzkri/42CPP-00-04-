/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 06:13:21 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/10/06 06:20:18 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain created\n";
}

Brain::~Brain( void )
{
	std::cout << "Brain destroyed\n";
}

Brain::Brain( Brain const& rhs )
{
	for (int i=0; i < N; i++){
		_ideas[i] = rhs._ideas[i];
	}
	std::cout << "Brain created with copy constructor\n";
}

Brain&	Brain::operator=( const Brain& rhs )
{
	if (this != &rhs){
		for (int i=0; i < N; i++){
			_ideas[i] = rhs._ideas[i];
		}
	}
	std::cout << "Brain copied\n";
	return (*this);
}


void	Brain::setIdea(std::string idea)
{
	for (int i=0; i < N; i++){
		if (_ideas[i].empty()){
			_ideas[i] = idea;
			return ;
		}
	}
	std::cout << "Brain is full\n";
}

std::string	Brain::getIdea(unsigned int idx) const
{
	if (idx < 100){
		return (_ideas[idx]);
	}
	return ("");
}
