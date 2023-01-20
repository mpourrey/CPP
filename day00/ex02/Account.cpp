/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:34:12 by mpourrey          #+#    #+#             */
/*   Updated: 2023/01/19 23:19:23 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
//#include <chrono>
#include <ctime>
//#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
	time_t	timestamp = time(0); //number of sec
	tm		*ltm = localtime(&timestamp);
	
	std::cout << '[';
	std::cout << 1900 + ltm->tm_year;
  	std::cout << 01 + ltm->tm_mon;
   	std::cout << ltm->tm_mday;
   	std::cout << "_";
   	std::cout << ltm->tm_hour;
   	std::cout << ltm->tm_min;
   	std::cout << ltm->tm_sec;
	std::cout << ']' << std::endl;
/* 	auto timestamp = std::chrono::system_clock::now();
	auto time = std::chrono::system_clock::to_time_t(timestamp);
	 */
}

bool	Account::makeWithdrawal(int withdrawal)
{
	bool	autorisation;
	
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	if (withdrawal <= this->_amount)
	{
		this->_nbWithdrawals++;
		this->_amount -= withdrawal;
		Account::_totalNbWithdrawals++;	
		std::cout << ";withdrawal:" << withdrawal;
		std::cout << ";amount:" << this->_amount;
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals;
		std::cout << std::endl;
		return (1);
	}
	else
	{
		std::cout << ";withdrawal:refused";
		std::cout << std::endl;
		return (0);
	}
	
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	this->_nbDeposits++;
	this->_amount += deposit;
	Account::_totalNbDeposits++;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;
	
}

void	Account::displayStatus( void ) const
{
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
}

void	Account::displayAccountsInfos( void ) //ligne
{	
	std::cout << "accounts:" << Account::_nbAccounts;
	std::cout << ";total:" << Account::_totalAmount;
	std::cout << ";deposits:" << Account::_totalNbDeposits;
	std::cout << ";withdrawals:" << Account::_totalNbWithdrawals;
	std::cout << std::endl;
}

int	Account::getNbAccounts(void)
{
	return(Account::_nbAccounts);
}

Account::Account(int initial_deposit) : _amount(initial_deposit) //constructeur
{
	this->_accountIndex = Account::_nbAccounts;
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount << ";created" << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
}

Account::~Account( void )
{
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount << ";closed" << std::endl;
}

