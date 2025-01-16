/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Float.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:06:55 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/09 01:51:09 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IType.hpp"

class	Float : public IType {
	private:
		float	attr;
	public:
		Float( void );
		Float(  std::string str );
		Float( const Float& rhs );
		Float&	operator=(const Float& rhs);
		~Float();
		virtual void	asInt( void ) const;
		virtual void	asChar( void ) const;
		virtual void	asFloat( void ) const;
		virtual void	asDouble( void ) const;
};