/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 07:38:54 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/16 09:10:55 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange( const std::string& dbPath ) : std::map<std::string, double>()
{
	std::ifstream	input(dbPath.c_str());
	
	if (input.fail())
		throw std::runtime_error("Error: can't open database");
	std::string	line;
	std::getline(input, line);
	while (std::getline(input, line, '\n'))
	{
		size_t pos = line.find(',');
		(*this)[line.substr(0, pos)] = strtod(line.substr(pos + 1).c_str(), NULL);
	}
}

BitcoinExchange::~BitcoinExchange( void )
{
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const& rhs ) : std::map<std::string, double>(rhs)
{
}

BitcoinExchange&	BitcoinExchange::operator=( const BitcoinExchange& rhs )
{
	if (this != &rhs){
		std::map<std::string, double>::operator=(rhs);
	}
	return (*this);
}


double BitcoinExchange::calc(std::string date, double quantity)
{
    if (this->find(date) != this->end())
        return (*this)[date] * quantity;
    iterator it = this->lower_bound(date);
    if (it != this->begin())
        --it;
    if (it != this->end())
        return it->second * quantity;
    throw std::runtime_error("Error: No suitable date found in database");
}


/* utils function */
#define MIN_YEAR 2009
#define MIN_MONTH 1
#define MIN_DAY 2


// date format: yyyy-mm-dd

bool	isFormated(std::string date)
{
	if (date.size() != 10) return false;
	for (size_t i = 0; i < date.size(); i++) {
		if ((i == 4 || i == 7) && date[i] != '-')
			return false;
		else if ((i != 4 && i != 7) && !isdigit(date[i]))
			return false;
	}
	return true;
}

bool	isValidDate(int y, int m, int d)
{
	// handle min year
	if (y < MIN_YEAR || (y == MIN_YEAR && (m < MIN_MONTH || (m == MIN_MONTH && d < MIN_DAY))))
		return false;
	// handle max and min range of day and month 
	if (m < 1 || m > 12) return false;
	if (d < 1 || d > 31) return false;
	if (m == 2) { // handle February
		if ((y % 4 == 0 && y % 100) || (y % 400 == 0)) // check is Leep year
			return d <= 29;
		return d <= 28;	
	}
	// april, june, september, november must have days beteween [1-30]
	if (m == 4 || m == 6 || m == 9 || m == 11)
		return d <= 30;
	return true;
}

bool	validDate(std::string date)
{
	
	if (!isFormated(date)) return false;
	std::stringstream	ss(date);
	int y, m, d;
	char discared;
	ss >> y >> discared >> m >> discared >> d;
	return isValidDate(y, m, d);
}

bool	validValue(std::string str, double& ans)
{
	std::stringstream	ss(str.c_str());
	ss >> ans;
	if (!ss.eof())
		return std::cerr << "Error: not a number" << '\n', false;
	if (ans < 0)
		return std::cerr << "Error: not a positive number" << '\n', false;
	if (ans > 1000)
		return std::cerr << "Error: too large number" << '\n', false;
	return true;
}
