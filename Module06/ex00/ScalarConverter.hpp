/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:27:39 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/09 01:41:53 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>
#include "IType.hpp"
#include "TypeFactory.hpp"

class	ScalarConverter {
	private:
		ScalarConverter( void );
		~ScalarConverter( void );
	public:
		static	void	convert( std::string str );
};