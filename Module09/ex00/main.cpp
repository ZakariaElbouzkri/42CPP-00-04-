/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 07:43:44 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/16 09:12:16 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

#define OPEN_ERR "Error: can't open file."


bool	checkHeader(std::ifstream& input)
{
	std::string head;
	if (!std::getline(input, head, '\n')) {
		return false;
	}
	return head == "date | value";
}



void	parseInput(BitcoinExchange& db, std::ifstream& input)
{
	(void)db;
	if (!checkHeader(input))
		throw std::runtime_error("Error: invalid input format");
	std::string	line;
	while (std::getline(input, line, '\n')) {
		// check line not empty and formated in "date | value"
		size_t pos = line.find(" | ");
		double	val = 0;
		if (pos == std::string::npos || pos != 10 || line.size() < 14 || !validDate(line.substr(0, pos))) {
			std::cerr << "Error: bad input => " << line << '\n';
			continue;
		} else if (!validValue(line.substr(pos + 3), val)) { // check for valid value
			continue;
		}
		// calc the result
		std::string	date = line.substr(0, pos);
		std::cout << date << " => " << val <<  " = " << db.calc(date, val) << '\n';
	}
}


int	main(int ac, char **av)
{
	try {
		BitcoinExchange	db;
		std::ifstream	input(av[1]);
		if (ac != 2 || input.fail())
			return std::cerr << OPEN_ERR << '\n', 1;
		parseInput(db, input);
	} catch (std::exception& e) {
		return std::cerr << e.what() << '\n', 1;
	}
	return (0);
}
