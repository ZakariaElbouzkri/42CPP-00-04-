/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 01:42:31 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/13 01:55:15 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie( std::string name) :_name(name){

}

Zombie::Zombie( void ){
}

void	Zombie::setName( std::string name) {
	_name = name;
}

void	Zombie::announce( void ){
	std::cout << _name << " :BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie(){
	std::cout << _name << " Killed\n";
}