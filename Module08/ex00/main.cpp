/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 00:07:28 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/04 00:18:48 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>

int main() {
	const int N = 10;
	std::deque<int> arr(N);
	for ( int i = 0; i < N; i++ ) {
		arr[i] = i * 2;
	}
	std::cout << "find( arr, 3 ) : " << std::boolalpha << easyfind(arr, 3) << '\n';
	std::cout << "find( arr, 4 ) : " << std::boolalpha << easyfind(arr, 4) << '\n';
}