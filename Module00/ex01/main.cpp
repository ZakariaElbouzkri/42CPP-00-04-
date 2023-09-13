/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 06:23:15 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/02 03:56:19 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <fstream>

int main(){
	std::string	cmd;
	PhoneBook	book;
	std::cout << "Welcom to awsome PhoneBook ☎️\n";
	std::cout << "The available Commands are:\n";
	std::cout << "\tADD: add a contact\n";
	std::cout << "\tSEARCH: search for contact\n";
	std::cout << "\tEXIT\n";
	while (true){
		std::cout << "$> ";
		if (!getline(std::cin, cmd) || cmd == "EXIT"){
			std::cout << "Exit\n";
			break;	
		}
		if (empty(cmd)) continue;
		if (cmd == "ADD") book.addContact();
		else if (cmd == "SEARCH") book.searchContact();
		else {
			std::cout << "\tInvalid command\n";
		}
	}
}
