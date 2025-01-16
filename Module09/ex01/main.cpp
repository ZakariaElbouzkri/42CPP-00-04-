/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:05:22 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/01/29 14:32:31 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) {
	if (ac != 2)
		return std::cerr << "Error\n", 1;
	int	result;
	if (!evaluate(av[1], result))
		return std::cerr << "Error\n", 1;
	std::cout << result << '\n';
}