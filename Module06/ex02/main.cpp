/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 23:45:28 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/09 00:15:22 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"

Base*	generate( void ) {
	std::srand(std::time(0));
	short num = std::rand() % 3;
	switch (num) {
		case 1:		return new A();
		case 2:		return new B();
		default:	return new C();
	}
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "Actual type pointer 'p' is  : " << "class A" << '\n';
	if (dynamic_cast<B*>(p) != NULL)
		std::cout << "Actual type pointer 'p' is  : " << "class B" << '\n';
	if (dynamic_cast<C*>(p) != NULL)
		std::cout << "Actual type pointer 'p' is  : " << "class C" << '\n';
}

void identify(Base& p) {
	try {
		A& a = dynamic_cast<A&>(p); (void)a;
		std::cout << "Actual type refrence 'p' is : " << "class A" << '\n';
	} catch(...) {}
	try {
		B& b = dynamic_cast<B&>(p); (void)b;
		std::cout << "Actual type refrence 'p' is : " << "class B" << '\n';
	} catch(...) {}
	try {
		C& c = dynamic_cast<C&>(p); (void)c;
		std::cout << "Actual type refrence 'p' is : " << "class C" << '\n';
	} catch(...) {}
}

int main() {
	Base*	obj = generate();
	identify(obj);
	identify(*obj);
	delete obj;
}