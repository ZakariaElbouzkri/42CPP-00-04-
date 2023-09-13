/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 01:59:01 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/13 02:05:12 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(){
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "The memory address of the string variable: " << &str << "\n";
	std::cout << "The memory address held by stringPTR: " << stringPTR << "\n";
	std::cout << "The memory address held by stringREF: " << &stringREF << "\n";

	std::cout << "------------------\n";
	std::cout << "The value of the string variable: " << str << "\n";
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << "\n";
	std::cout << "The value pointed to by stringREF: " << stringREF << "\n";
}