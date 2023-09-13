/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 01:50:25 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/13 01:56:48 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(){
	const	int N = 10;
	Zombie*	hord = zombieHorde(N, "Foo");
	for (int i=0; i < N; i++){
		hord[i].announce();
	}
	delete[] hord;
}