/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 05:48:08 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/01 02:41:13 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	this->currIdx = 0;
	this->size = 0;
}

PhoneBook::~PhoneBook(){	
}

void	PhoneBook::addContact(void){
	this->book[this->currIdx].addUpdateContact();
	this->currIdx = ((this->currIdx + 1) % 8);
	this->size += (this->size < 8);
}

std::string	trancateStr(std::string	str){
	std::string	ans;

	if (str.size() <= 10){
		return (str);
	}
	ans = str.substr(0, 9);
	ans.push_back('.');
	return (ans);
}

void	PhoneBook::displayAllContacts(void){
	std::cout << "|     Index|First Name| Last Name| Nick Name|\n";
	std::cout << "---------------------------------------------\n";
	for (int idx=0; idx < this->size; idx++){
		std::cout << "|" << std::setw(10) << idx;
		std::cout << "|" << std::setw(10) << trancateStr(this->book[idx].getFirstName());
		std::cout << "|" << std::setw(10) << trancateStr(this->book[idx].getLastName());
		std::cout << "|" << std::setw(10) << trancateStr(this->book[idx].getNickName());
		std::cout << "|\n";
		std::cout << "---------------------------------------------\n";
	}
}

bool	isValid(std::string strIdx, int& idx){
	int i=0;
	if (strIdx[i] == '+') i++;
	if (strIdx.size() - i != 1) return (false);
	return (idx = (strIdx[i] - 48), isdigit(strIdx[i]));
}

void	PhoneBook::searchContact(void){
	std::string strIdx;
	int idx = 0;
	this->displayAllContacts();
	std::cout << "Enter Index: ";
	if (!getline(std::cin, strIdx)){
		std::cout << "Exit\n";
	}
	else if (isValid(strIdx, idx) && (idx < this->size || this->size != 0)){
		this->book[idx].displayContactInfo();
	}
	else{
		std::cout << "\tInvalid index\n";
	}
}
