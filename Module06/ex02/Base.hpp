/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 23:42:16 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/08 23:51:43 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Base {
	public:
		virtual	~Base(){};
};

class	A : public Base {
	public:
		~A(){};
};

class	B : public Base {
	public:
		~B(){};
};


class	C : public Base {
	public:
		~C(){};
};
