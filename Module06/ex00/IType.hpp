/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IType.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:01:12 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/09 01:46:21 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>

class	IType {
	public:
		virtual	~IType() {};
		virtual void	asInt( void ) const = 0;
		virtual void	asChar( void ) const = 0;
		virtual void	asFloat( void ) const = 0;
		virtual void	asDouble( void ) const = 0;
};
