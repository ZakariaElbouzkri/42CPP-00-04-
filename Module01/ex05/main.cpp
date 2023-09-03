/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 05:18:14 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/02 07:01:13 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(){
	std::string	level;
	Harl	harl;

	while (true){
		if (!getline(std::cin, level))
			break;
		harl.complain(level);
	}
}