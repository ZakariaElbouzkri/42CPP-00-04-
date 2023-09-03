/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 05:59:43 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/01 06:20:43 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie*	zombieHorde( int N, std::string name ){
	Zombie* zombies = new Zombie[N];
	for (int i=0; i < N; i++){
		zombies[i].setName(name);
	}
	return (zombies);
}