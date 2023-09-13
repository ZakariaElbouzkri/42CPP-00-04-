/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 01:43:48 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/13 01:50:24 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	Zombie*	x = new Zombie[N];
	for (int i=0; i < N; i++){
		x[i].setName(name);
	}
	return (x);
}