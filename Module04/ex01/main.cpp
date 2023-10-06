/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 09:07:59 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/10/06 07:42:04 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int	main()
{
	{
		Animal* meta = new Animal();
		Cat*	c = new Cat();
		Dog*	d = new Dog();
		std::cout << meta->getType() << '\n';
		std::cout << c->getType() << '\n';
		std::cout << d->getType() << '\n';

		std::cout << "==================\n";
		Cat	*c1 = new Cat(*c);
		c1->makeSound();

		*c = *c1;

		delete c;
		delete meta;
		delete d;
		delete c1;
	}
	std::cout << "+++++++++++++++++\n";
	{
		const Animal* meta = new Animal();
		const Cat* cat = new Cat();
		const Dog* dog = new Dog();
		
		meta->makeSound();
		cat->makeSound();
		dog->makeSound();
		
		Dog* dog2 = new Dog(*dog);
		
		*dog2 = *dog;
		dog2->makeSound();
		delete meta;
		delete dog;
		delete cat;
		delete dog2;
	}
}