/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 23:20:26 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/08 23:32:31 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <string>

struct Data {
	int		a;
	char	c;
	double	d;
	Data(int a = 10, char c = 'a', double d = 12.5) : a(a), c(c), d(d) {}
};

std::ostream&	operator<<(std::ostream& os, const Data& rhs );

class	Serializer {
	private:
		Serializer( void );
		~Serializer( void );
	public:
		static	uintptr_t	serialize(Data* ptr);
		static	Data*		deserialize(uintptr_t raw);
};
