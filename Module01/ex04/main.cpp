/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 08:26:48 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/02 05:11:12 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	sedForLosers(std::string filename, std::string toFind, std::string toReplace){
	std::ifstream	inFile(filename);
	std::ofstream	outFile("outFile.txt");
	std::string		line;
	size_t			pos;
	if (!inFile.is_open() || !outFile.is_open()){
		std::cerr << strerror(errno) << "\n";
		return (1);
	}
	while (getline(inFile, line)){
		while ((pos = line.find(toFind)) != std::string::npos){
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
		std::cout << "[string 1]" << " ";
		std::cout << "[string 2]" << "\n";
		return (1);
	}
	return (sedForLosers(av[1], av[2], av[3]));
}

