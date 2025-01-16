/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Double.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:06:18 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/09 01:25:24 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IType.hpp"

class	Double : public IType {
	private:
		double	attr;
	public:
		Double( void );
		Double( const std::string str );
		Double( const Double& rhs );
		Double&	operator=(const Double& rhs);
		~Double();
		virtual void	asInt( void ) const;
		virtual void	asChar( void ) const;
		virtual void	asFloat( void ) const;
		virtual void	asDouble( void ) const;
};