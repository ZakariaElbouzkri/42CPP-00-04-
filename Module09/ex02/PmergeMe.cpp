/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 09:17:03 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/16 10:33:55 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PmergeMe.hpp"

PmergeMe::PmergeMe( void ){}

PmergeMe::PmergeMe( const PmergeMe& rhs ){
(void) rhs;}

PmergeMe&	PmergeMe::operator=( const PmergeMe& rhs ){
	(void) rhs; return *this;}

PmergeMe::~PmergeMe( void ){}

bool	compare(int a, int b)
{
	return a > b;
}

int	searchInsert(std::vector<int>& nums, int target)
{
	int low = 0, high = nums.size() - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (nums[mid] == target)
			return mid;
		if (nums[mid] < target)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return low;
}

int	searchInsert(std::deque<int>& nums, int target)
{
	int low = 0, high = nums.size() - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (nums[mid] == target)
			return mid;
		if (nums[mid] < target)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return low;
}

void	PmergeMe::sort(std::vector<int>& nums)
{
	size_t N = nums.size() / 2;
	std::vector<std::vector<int> >	pairs(N, std::vector<int>(2)); // declare arr of pairs
	int 	strugller = (nums.size() & 1) * nums.back() + !(nums.size() & 1) * (-1); // unpair the last element if size if nums is odd
	if (nums.size() & 1) nums.pop_back(); 
	for (size_t i = 0, j = 0; i < nums.size(); i += 2, j++) { // splite nums to [n / 2] pairs
		pairs[j][0] = nums[i];
		pairs[j][1] = nums[i + 1];
	}
	
	for (size_t i = 0; i < N; i++) { // sort each pair by biggest value
		std::sort(pairs[i].begin(), pairs[i].end(), compare);
	}
	
	std::sort(pairs.begin(), pairs.end());
	nums.resize(N, 0); // resize nums to n/2 and make it the mainChain
	
	// fill the mainchain top element of every pair wich already sorted 
	// so that will be easy to perform a binary search on the mainChain
	for (size_t i = 0; i < N; i++) {
		nums[i] = pairs[i][0];
	}
	// loop throw each last element on pairs and find his correct posission 
	for (size_t i = 0; i < N; i++) {
		int pos = searchInsert(nums, pairs[i][1]);
		nums.insert(nums.begin() + pos, pairs[i][1]);
	}

	// inset the unpaired elements to his correct possition
	if (strugller != -1) {
		int pos = searchInsert(nums, strugller);
		nums.insert(nums.begin() + pos, strugller);
	}
}

void	PmergeMe::sort(std::deque<int>& nums)
{
	size_t N = nums.size() / 2;
	std::deque<std::deque<int> >	pairs(N, std::deque<int>(2));
	int 	strugller = (nums.size() & 1) * nums.back() + !(nums.size() & 1) * (-1);
	if (nums.size() & 1) nums.pop_back();
	
	for (size_t i = 0, j = 0; i < nums.size(); i += 2, j++) {
		pairs[j][0] = nums[i];
		pairs[j][1] = nums[i + 1];
	}
	
	for (size_t i = 0; i < N; i++) {
		std::sort(pairs[i].begin(), pairs[i].end(), compare);
	}
	
	std::sort(pairs.begin(), pairs.end());
	nums.resize(N, 0);
	
	for (size_t i = 0; i < N; i++) {
		nums[i] = pairs[i][0];
	}
	
	for (size_t i = 0; i < N; i++) {
		int pos = searchInsert(nums, pairs[i][1]);
		nums.insert(nums.begin() + pos, pairs[i][1]);
	}
	
	if (strugller != -1) {
		int pos = searchInsert(nums, strugller);
		nums.insert(nums.begin() + pos, strugller);
	}
}

