/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 06:22:01 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/01 06:39:04 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main(){
	const int N = 10;
	Zombie* zombies = zombieHorde(10, "Foo");
	for (int i=0; i < N; i++){
		zombies[i].announce();
	}
	std::cout << "\n";
	delete[] zombies;
}