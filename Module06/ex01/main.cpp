/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 23:30:43 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/08 23:38:10 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>



int main() {
	Data*	ptr = new Data(10, 'a', 12.5);
	std::cout << *ptr << '\n';
	uintptr_t	raw = Serializer::serialize(ptr);
	std::cout << "raw: " << raw << " ptr: " << ptr << '\n';
	Data*	dt = Serializer::deserialize(raw);
	std::cout << *dt << '\n';
	delete	dt;
}