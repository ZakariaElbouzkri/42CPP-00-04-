/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 01:19:00 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/10/05 03:56:15 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Cure_HPP_
#define _Cure_HPP_

#include <iostream>
#include "AMateria.hpp"

class	Cure : public AMateria
{
	public:
		Cure( void );
		~Cure( void );
		Cure( Cure const& rhs );
		Cure&	operator=( const Cure& rhs );
		Cure*	clone() const;
		void	use(ICharacter& target);
};

#endif
