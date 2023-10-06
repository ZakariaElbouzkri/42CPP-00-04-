/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 06:13:11 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/10/06 06:18:06 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Brain_HPP_
#define _Brain_HPP_

#include <iostream>

#define N 100

class	Brain
{

	private:
		std::string	_ideas[100];
	public:
		Brain( void );
		~Brain( void );
		Brain( Brain const& rhs );
		Brain&	operator=( const Brain& rhs );
		void	setIdea(std::string idea);
		std::string	getIdea(unsigned int idx) const;
};

#endif
