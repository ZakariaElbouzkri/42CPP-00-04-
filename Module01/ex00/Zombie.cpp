/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 05:36:15 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/01 05:54:17 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	zombieName = name;
}

Zombie::~Zombie(){
	std::cout << zombieName << " Died\n";	
}

void	Zombie::announce( void ){
	std::cout << zombieName << ": " << "BraiiiiiiinnnzzzZ...\n";
}