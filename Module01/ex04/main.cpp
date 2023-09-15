/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 06:52:44 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/15 20:05:48 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>
#include <string.h>


int	sedForLosers(std::string filename, std::string toFind, std::string toReplace){
	std::ifstream	inFile(filename.c_str());
	std::ofstream	outFile("outFile.txt");
	std::string		line;
	size_t			pos;
	if (!inFile.is_open() || !outFile.is_open()){
		std::cerr << strerror(errno) << "\n";
		return (1);
	}
	while (getline(inFile, line)){
		while (toFind != toReplace && (pos = line.find(toFind)) != std::string::npos){
			line.erase(pos, toFind.size());
			line.insert(pos, toReplace);
		}
		outFile << line << "\n";
		line.clear();
	}
	inFile.close();
	outFile.close();
	return (0);
}

int main(int ac, char **av){
	if (ac != 4){
		std::cout << "usage: " << av[0] << " ";
		std::cout << "[filename]" << " ";
		std::cout << "[toFind]" << " ";
		std::cout << "[toReplace]" << "\n";
		return (1);
	}
	return (sedForLosers(av[1], av[2], av[3]));
}
