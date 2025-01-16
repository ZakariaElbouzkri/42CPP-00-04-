/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeFactory.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:32:24 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/09 01:46:29 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IType.hpp"
#include "Int.hpp"
#include "Char.hpp"
#include "Double.hpp"
#include "Float.hpp"

#define INT		0
#define CHAR	1
#define DOUBLE	2
#define FLOAT	3
#define NONE	4



class	TypeFactory {
	private:
		TypeFactory( void );
		~TypeFactory( void );
		static	int		detectType( std::string str );
		static	bool	isLiteral( const std::string& str, int& type );

	public:
		static	IType*	makeType( std::string str );
};
