/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 23:02:52 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/09 05:57:40 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Functions.hpp"

int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}

// int main() {
// 	int a = 20, b = 33;
// 	std::cout << "Befor: " << "a: " << a << ", b: " << b << '\n';
// 	swap(a, b);
// 	std::cout << "After: " << "a: " << a << ", b: " << b << '\n';
// 	std::cout << "min(" << a << ", " << b << ") : " << min(a, b) << '\n';
// 	std::cout << "max(" << a << ", " << b << ") : " << max(a, b) << '\n';
// }


