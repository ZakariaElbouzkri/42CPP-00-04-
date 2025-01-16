/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:22:03 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/16 10:34:00 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <deque>


class	PmergeMe {
	private:
		PmergeMe( void );
		~PmergeMe( void );
		PmergeMe( const PmergeMe& rhs );
		PmergeMe&	operator=( const PmergeMe& rhs );
	public:
		static	void	sort(std::vector<int>& nums);
		static	void	sort(std::deque<int>& nums);
};

