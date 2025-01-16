/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:29:16 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/09 01:43:26 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"



ScalarConverter::ScalarConverter( void ) {
}

ScalarConverter::~ScalarConverter( void ) {
}

void	ScalarConverter::convert( std::string str ) {
	IType*	ptr = TypeFactory::makeType(str);
	ptr->asChar();
	ptr->asInt();
	ptr->asFloat();
	ptr->asDouble();
}
