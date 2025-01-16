/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 23:24:59 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/08 23:33:31 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

std::ostream&	operator<<(std::ostream& os, const Data& rhs ) {
	std::cout << "Data => a: " << rhs.a << " c: " << rhs.c << " d: " << rhs.d;
	return os;
}

Serializer::Serializer( void ) {
}

Serializer::~Serializer( void ) {
}

uintptr_t	Serializer::serialize(Data* ptr) {
	return	reinterpret_cast<uintptr_t>(ptr);
}

Data*		Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

