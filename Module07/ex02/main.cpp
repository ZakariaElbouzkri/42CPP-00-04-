/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 23:34:35 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/04 00:05:09 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"


int main()
{
	const int N = 10;
	Array<long> nums(N);
	for (unsigned int i = 1; i <= N; i++) {
		nums[i - 1] = i * 12;
	}
	for ( unsigned int i = 0; i < N; i++ ) {
		std::cout << nums[i] << '\n';
	}
	try {
		nums[-1] = 0;
	} catch( const std::exception& e ) {
		std::cout << e.what() << '\n';
	}
    return 0;
}