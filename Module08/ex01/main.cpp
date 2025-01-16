/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 00:20:02 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/09 11:26:22 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// int main()
// {
// 	try {
// 		std::vector<int> arr(10);
// 		for (size_t i = 0; i < arr.size(); i++){
// 			arr[i] = (i + 1) * 2;
// 		}
// 		Span	sp(arr.size());
// 		sp.addNumbers(arr.begin(), arr.end());
// 		for (size_t i = 0; i < arr.size(); i++) {
// 			std::cout << arr[i] << ", ";
// 		}
// 		std::cout << '\n';

// 		std::cout << sp.shortestSpan() << std::endl;
// 		std::cout << sp.longestSpan() << std::endl;	
// 	} catch (std::exception& e) {
// 		std::cout << e.what() << '\n';
// 	}
// }

int main() {
	Span	spn(10);
	spn.addNumber(1);
	spn.addNumber(2);
	spn.addNumber(3);
	spn.addNumber(4);
	Span::iterator it = spn.begin();
	Span::iterator ite = spn.end();
	for (; it != ite; it++) {
		std::cout << *(it) << '\n';
	}
	std::cout << "shortestSpan: " << spn.shortestSpan() << '\n';
	std::cout << "longestSpan: " << spn.longestSpan() << '\n';
}

// int main() {
// 	const unsigned int N = 100000; 
// 	Span	span( N );
// 	std::srand(time(NULL));
// 	for (unsigned int i = 0; i < N; i++) {
// 		span.addNumber(rand());
// 	}
// 	std::cout << "shortest span: " << span.shortestSpan() << '\n';
// 	std::cout << "longest span: " << span.longestSpan() << '\n';
// }
