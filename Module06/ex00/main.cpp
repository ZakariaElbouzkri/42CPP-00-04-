/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 00:24:29 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/09 01:45:43 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>
#include "ScalarConverter.hpp"
#include <exception>


int main(int ac, char **av) {
	if (ac != 2) return 1;
	try {
		ScalarConverter::convert(av[1]);
	} catch ( std::exception& e) {
		std::cout << e.what() << '\n';
	}
}
