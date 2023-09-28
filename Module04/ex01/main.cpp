/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 09:07:59 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/25 11:25:41 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


// void	leaks()
// {
// 	system("leaks Animals");
// }

int	main()
{
	// atexit(leaks);
	const int N = 100;
	Animal *arr[N];

	for (int i=0; i < N; i++){
		if (i * 2 >= N){
			arr[i] = new Dog();
		}else{
			arr[i] = new Cat();
		}
	}
	for (int i=0; i < N; i++){
		delete arr[i];
	}
}
