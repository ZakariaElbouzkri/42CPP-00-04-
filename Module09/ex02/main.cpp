/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:19:43 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/16 10:24:25 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <sys/time.h>
#include <iomanip>

template<typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& nums) {
	// os << "{";
	for (size_t i = 0; i < nums.size(); i++)
		os << nums[i] << (i + 1 == nums.size() ? "" : " ");
	// os << "}";
	return os;
}

template<typename T>
std::ostream& operator<<(std::ostream& os, const std::deque<T>& nums) {
	// os << "{";
	for (size_t i = 0; i < nums.size(); i++)
		os << nums[i] << (i + 1 == nums.size() ? "" : " ");
	// os << "}";
	return os;
}


bool	parseInput(std::vector<int>& nums, char **av) {
	size_t N = nums.size();
	for (size_t idx = 0; idx < N; idx++) {
		if (!isdigit(av[idx][0]) && av[idx][0] != '+')
			return false;
		std::stringstream	ss(av[idx]);
		long				num;
		ss >> num;
		if (!ss.eof() || num > INT_MAX)
			return false;
		nums[idx] = num;
	}
	return true;
}

unsigned long long timeNow(void) {
	timeval	now;
	gettimeofday(&now, NULL);
    return now.tv_sec * 1e6 + now.tv_usec;
}

int main(int ac, char **av) {
    if (ac <= 2)
        return std::cout << "Error\n", 1;
    std::vector<int> nums(ac - 1);
    if (!parseInput(nums, &av[1]))
        return std::cout << "Error\n", 1;
    std::deque<int> copy(nums.begin(), nums.end());


    std::cout << "Before: " << nums << '\n';

    double vecTime, dequeTime;

    // time to process numbers with vector in microseconds
	double start = timeNow();
    PmergeMe::sort(nums);
    double end = timeNow();
    vecTime = (end - start);

    // time to process numbers with deque in microseconds
    start = timeNow();
    PmergeMe::sort(copy);
    end = timeNow();
    dequeTime = end - start;

    std::cout << "After: " << copy << '\n';

    std::cout << std::fixed << std::setprecision(5) << "Time to process a range of " << nums.size() << " elements with std::vector : " << vecTime << " us\n";
    std::cout << std::fixed << std::setprecision(5) << "Time to process a range of " << copy.size() << " elements with std::deque  : " << dequeTime << " us\n";

}
