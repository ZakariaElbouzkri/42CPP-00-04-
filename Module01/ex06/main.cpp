/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 06:26:54 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/13 06:50:29 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av){
	Harl	harl;
	if (ac == 2){
		harl.complain(av[1]);
	}else{
		std::cout << "[ Probably complaining about insignificant problems ]\n";
		return 1;
	}
}