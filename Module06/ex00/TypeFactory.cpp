/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeFactory.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:34:37 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/09 01:53:36 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TypeFactory.hpp"


TypeFactory::TypeFactory( void ) {
}

TypeFactory::~TypeFactory( void ) {
}

int	TypeFactory::detectType( std::string str ) {
	    int type = NONE;

    if (str.empty()) return NONE;
    if (str.size() == 1 && !isdigit(str[0])) return CHAR;
    if (isLiteral(str, type)) return type;

    bool hasDecimal = false, hasDigit = false, hasF = false;

    size_t i = (str[0] == '-' || str[0] == '+') ? 1 : 0;

    while (i < str.size()) {
        if (isdigit(str[i]))
            hasDigit = true;
        else {
            if (str[i] == '.') {
                if (hasDecimal)	return NONE;
                hasDecimal = true;
            } else if (str[i] == 'f') {
                if (i != str.size() - 1 || !hasDecimal || !hasDigit)	return NONE;
                hasF = true;
            } else 	return NONE;
        }
        i++;
    }

    if (!hasDigit) return NONE;
    if (hasF) return FLOAT;
    return hasDecimal ? DOUBLE : INT;
}

IType*	TypeFactory::makeType( std::string str ) {
	int t = TypeFactory::detectType(str);
	switch (t)	{
		case INT:		return new Int(str);
		case CHAR:		return new Char(str);
		case DOUBLE:	return new Double(str);
		case FLOAT:		return new Float(str);
		default: 
			throw std::runtime_error(("Unknown type: " + str).c_str());
	}
}

bool	TypeFactory::isLiteral( const std::string& str, int& type ) {
	if (str == "nan" || str == "inf" || str == "+inf" || str == "-inf")
		return type = DOUBLE, true;
	else if (str == "nanf" || str == "inff" || str == "+inff" || str == "-inff")
		return type = FLOAT, true;
	return false;
}