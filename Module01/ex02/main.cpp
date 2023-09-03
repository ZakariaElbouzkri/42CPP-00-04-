/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 06:42:34 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/01 06:51:39 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main(){
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "address memory of string variable   : " << &str << "\n";
	std::cout << "address memory of stringPTR variable: " << stringPTR << "\n";
	std::cout << "address memory of stringREF variable: " << &stringREF << "\n\n";

	std::cout << "value of string variable   : " << str << "\n";
	std::cout << "value of stringPTR variable: " << *stringPTR << "\n";
	std::cout << "value of stringREF variable: " << stringREF << "\n";
}
