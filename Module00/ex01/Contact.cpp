/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 05:38:35 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/01 02:41:55 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(){
}

Contact::~Contact(){
}

bool	empty(std::string	str){
	if (str.empty()) return (true);
	for (size_t i=0; i < str.size(); i++){
		if (!isspace(str[i])) return (false);
	}
	return (true);
}

void	readLine(std::string& dest, std::string prompt){

	dest.clear();
	while (empty(dest)){
		std::cout << prompt;
		if (!getline(std::cin, dest)){
			std::cout << "Exit\n";
			exit(0);
		}
	}
}

void	Contact::addUpdateContact(void){
	readLine(this->firstName, "Enter your first name: ");
	readLine(this->lastName, "Enter your last name: ");
	readLine(this->nickName, "Enter your nickname: ");
	readLine(this->phoneNumber, "Enter your phone number: ");
	readLine(this->darkestSecret, "Enter your darkest secret: ");
}

void	Contact::displayContactInfo(void){
	std::cout << "first name     : " << this->firstName << "\n";
	std::cout << "last name      : " << this->lastName << "\n";
	std::cout << "nick name      : " << this->nickName << "\n";
	std::cout << "phone number   : " << this->phoneNumber << "\n";
	std::cout << "darkest secret : " << this->darkestSecret << "\n";
}

std::string	Contact::getFirstName(void){
	return (this->firstName);
}

std::string	Contact::getLastName(void){
	return (this->lastName);
}

std::string	Contact::getNickName(void){
	return (this->nickName);
}

std::string	Contact::getSecret(void){
	return (this->darkestSecret);
}

std::string	Contact::getPhoneNumber(void){
	return (this->phoneNumber);
}
