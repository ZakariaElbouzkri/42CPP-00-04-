/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 05:36:15 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/01 06:40:36 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	Zombie::numberOfZombiez = 0;

Zombie::Zombie(){
	zombieIdx = numberOfZombiez++;
}

Zombie::~Zombie(){
	std::cout << zombieName << " "  << zombieIdx << " Died\n";
}

void	Zombie::announce( void ){
	std::cout << zombieName << " " << " BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::setName( std::string name ){
	zombieName = name;
}