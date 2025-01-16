/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Int.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:08:15 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/09 01:17:36 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IType.hpp"

class	Int : public IType {
	private:
		int	attr;
	public:
		Int( void );
		Int( const std::string str );
		Int( const Int& rhs );
		Int&	operator=(const Int& rhs);
		~Int();
		virtual void	asInt( void ) const;
		virtual void	asChar( void ) const;
		virtual void	asFloat( void ) const;
		virtual void	asDouble( void ) const;
};

