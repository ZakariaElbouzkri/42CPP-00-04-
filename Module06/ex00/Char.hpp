/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Char.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:04:19 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/09 01:12:11 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IType.hpp"

class	Char : public IType {
	private:
		char	attr;
	public:
		Char( void );
		Char( const std::string str );
		Char( const Char& rhs );
		Char&	operator=(const Char& rhs);
		~Char();
		virtual void	asInt( void ) const;
		virtual void	asChar( void ) const;
		virtual void	asFloat( void ) const;
		virtual void	asDouble( void ) const;
};

