/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 02:03:11 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/10/05 02:24:21 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MateriaSource_HPP_
#define _MateriaSource_HPP_

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"

class	MateriaSource : public IMateriaSource
{

	private:
		AMateria* _inventory[4];
	public:
		MateriaSource( void );
		~MateriaSource( void );
		MateriaSource( MateriaSource const& rhs );
		MateriaSource&	operator=( const MateriaSource& rhs );
		
		AMateria*	createMateria(std::string const & type);
		void		learnMateria(AMateria* m);
};

#endif
