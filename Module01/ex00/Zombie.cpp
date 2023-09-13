/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 22:46:13 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/12 22:52:05 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce( void ){
	std::cout << _name << " :BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie( std::string name ) : _name(name){
}

Zombie::~Zombie(){
	std::cout << _name << " : killed\n";
}