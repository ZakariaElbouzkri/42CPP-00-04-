/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 02:54:54 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/01 05:27:49 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


Account::Account(int initial_deposit ){

	_amount = initial_deposit;
	_accountIndex = _nbAccounts++;
	_totalAmount += _amount;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created\n";

}

Account::Account( void ){
	_amount = 0;
	_accountIndex = _nbAccounts;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts += 1;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created\n";
}

Account::~Account( void ){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed\n";
}


void	Account::_displayTimestamp( void ){
	time_t timeNow = std::time(NULL);
	std::cout << std::setfill('0') << "[" << std::localtime(&timeNow)->tm_year;
	std::cout << std::setw(2) << std::localtime(&timeNow)->tm_mon;
	std::cout << std::setw(2) << std::localtime(&timeNow)->tm_mday;
	std::cout << "_";
	std::cout << std::setw(2) << std::localtime(&timeNow)->tm_hour;
	std::cout << std::setw(2) << std::localtime(&timeNow)->tm_min;
	std::cout << std::setw(2) << std::localtime(&timeNow)->tm_sec;
	std::cout << "] ";
}


int	Account::getNbAccounts( void ){
	return (_nbAccounts);
}

int	Account::getTotalAmount( void ){
	return (_totalAmount);
}


int Account::getNbDeposits( void ){
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ){
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << "\n";
}

void	Account::makeDeposit(int deposit ){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << _amount + deposit << ";";
	std::cout << "nb_deposits:" << _nbDeposits + 1<< "\n";
	_totalAmount += deposit;
	_totalNbDeposits += 1;
	_nbDeposits += 1;
	_amount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal ){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	if (withdrawal > _amount){
		std::cout << "withdrawal:refused\n";
		return (false);
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals += 1;
	_totalNbWithdrawals += 1;
	std::cout << "withdrawal:" << withdrawal << ";";
	std::cout << "amount:" << _amount  << ";";
	std::cout << "nb_withdrawals:" << _nbWithdrawals << "\n";
	return (true);
}

int	Account::checkAmount( void ) const {
	return (0);
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << "\n";
}
