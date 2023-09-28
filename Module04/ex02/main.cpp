/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 09:07:59 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/25 11:33:38 by zel-bouz         ###   ########.fr       */
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
	{
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
	std::cout << "=======================" << '\n';
	{
		Cat		*cat = new Cat();
		Dog		*dog = new Dog();
		/*
			Animal	*meta = new Animal();

			this will cause compile error
			because Animal is Abstract Class
		*/
		// 
		cat->makeSound();
		dog->makeSound();
	
		delete cat;
		delete dog;
	}
}
