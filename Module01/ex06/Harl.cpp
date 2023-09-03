/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 03:21:56 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/03 03:35:19 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

Harl::Harl(){
}

Harl::~Harl(){
}

void	Harl::debug(){
	std::cout << "private [debug] member function of Harl called\n";
}

void	Harl::info(){
	std::cout << "private [info] member function of Harl called\n";
}

void	Harl::warning(){
	std::cout << "private [warning] member function of Harl called\n";
}

void	Harl::error(){
	std::cout << "private [error] member function of Harl called\n";
}

void	Harl::complain( std::string level ){
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	ans = -1;
	for (int i=0; i < 4; i++){
		if (!level.compare(levels[i]))
			ans = i;
	}
	switch (ans)
	{
		case (0):
			this->debug();
		case (1):
			this->debug();
		case (2):
			this->warning();
		case (3):
			this->error();
			break;
		default:
			break;
	}
}
