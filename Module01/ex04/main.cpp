/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 06:52:44 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/15 23:52:45 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>

void	usage( std::string program ){
	std::cout << "usage: " << program << " ";
	std::cout << "[filename]" << " ";
	std::cout << "[toFind]" << " ";
	std::cout << "[toReplace]" << "\n";
}

std::string	sTrim(std::string&	str){
	std::string	newStr;

	size_t	start = str.find_first_not_of(" \v\r\f\t\n");
	size_t	end = str.find_last_not_of(" \v\r\f\t\n");
	newStr = str.substr(start, end-start+1);
	return (newStr);
}

bool	isValid(std::string filename, std::string toFind, std::string toReplace){
	if (filename.empty() || toFind.empty() || toReplace.empty()) return (false);
	if (sTrim(toFind) == sTrim(toReplace)) return (false);
	return (true);
}

bool	sedForLosers(std::string filename, std::string toFind, std::string toReplace){
	if (!isValid(filename, toFind, toReplace)){
		return (false);
	}
	std::string		out = filename + ".replace";
	std::ifstream	infile(filename);
	std::ofstream	outfile(out);
	std::string		line;
	size_t			pos;
	if (!outfile.is_open() || !infile.is_open()){
		(outfile.close(), infile.close());
		return (false);
	}
	while (getline(infile, line))
	{
		while ((pos = line.find(toFind)) != std::string::npos){
			line.erase(pos, toFind.size());
			line.insert(pos, toReplace);
		}
		outfile << line << "\n";
		line.clear();
	}
	(outfile.close(), infile.close());
	return (true);
}


int main(int ac, char **av){
	if (ac != 4) return (usage(av[0]), 1);
	if (!sedForLosers(av[1], av[2], av[3])){
		std::cout << "Error\n";
		return (1);
	}
}