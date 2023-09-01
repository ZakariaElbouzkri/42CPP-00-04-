/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 05:23:27 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/08/31 05:27:33 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main(int ac, char **av){
	if (ac < 2){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}else{
		for (int i=1; i < ac; i++){
			for (int j=0; av[i][j]; j++){
				std::cout << (char)toupper(av[i][j]);
			}
		}
		std::cout << std::endl;
	}
}