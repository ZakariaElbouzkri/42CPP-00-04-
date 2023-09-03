/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 05:26:32 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/02 20:28:08 by zel-bouz         ###   ########.fr       */
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
	typedef void (Harl::*FuncPtr) (void);
	FuncPtr ptr[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i=0; i < 4; i++){
		if (!level.compare(levels[i]))
			(this->*ptr[i])();
	}
}
