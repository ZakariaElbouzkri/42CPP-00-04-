/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 07:36:10 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/16 09:11:13 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BitcoinExchange_HPP_
#define _BitcoinExchange_HPP_

#include <iostream>
#include <map>
#include <cstring>
#include <string>
#include <fstream>
#include <sstream>

#define DB_PATH "./data.csv"

class	BitcoinExchange : public std::map<std::string, double>
{
	public:
		BitcoinExchange( const std::string& dbPath = DB_PATH );
		~BitcoinExchange( void );
		BitcoinExchange( BitcoinExchange const& rhs );
		BitcoinExchange&	operator=( const BitcoinExchange& rhs );
		double	calc(std::string date, double quantity);
};


bool	isFormated(std::string date);
bool	isValidDate(int y, int m, int d);
bool	validDate(std::string date);
bool	validValue(std::string str, double& ans);

#endif
