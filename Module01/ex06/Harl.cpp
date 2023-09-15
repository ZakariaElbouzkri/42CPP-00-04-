/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 06:10:29 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/15 02:11:17 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ){

}

Harl::~Harl( void ){

}

void	Harl::info( void ){
	std::cout << "[INFO]\n";
	std::cout << "I cannot believe adding extra bacon costs more money.\
 You didn’t put enough bacon in my burger! If you did, I wouldn’t\
 be asking for more!\n";
}

void	Harl::debug( void ){
	std::cout << "[DEBUG]\n";
	std::cout << "I love having extra bacon for my\
 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void	Harl::warning( void ){
	std::cout << "[WARNING]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been\
 coming for years whereas you started working here since last month.\n";
}

void	Harl::error( void ){
	std::cout << "[ERROR]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}


void	Harl::complain( std::string level ){
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	idx = -1;
	for (int i=0; i < 4; i++){
		if (level == levels[i]) idx = i;
	}
	switch (idx)
	{
		case (0):
			this->debug();
			/* FALLTHROUGH */
		case (1):
			this->info();
			/* FALLTHROUGH */
		case (2):
			this->warning();
			/* FALLTHROUGH */
		case (3):
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break;
	}
}

