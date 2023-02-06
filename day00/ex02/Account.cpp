/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:34:12 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/05 19:19:35 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
	time_t	timestamp = time(0); //number of sec
	tm		*ltm = localtime(&timestamp);
	
	std::cout << std::setfill('0') 
				<< '['
				<< 1900 + ltm->tm_year
  				<< std::setw(2) << 1 + ltm->tm_mon
   				<< std::setw(2) << ltm->tm_mday
   				<< '_'
   				<< std::setw(2) << ltm->tm_hour
   				<< std::setw(2) << ltm->tm_min
   				<< std::setw(2) << ltm->tm_sec
				<< "] ";
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
				<< ";p_amount:" << this->_amount;
	if (withdrawal <= this->_amount)
	{
		this->_nbWithdrawals++;
		this->_amount -= withdrawal;
		Account::_totalNbWithdrawals++;	
		Account::_totalAmount -= withdrawal;
		std::cout << ";withdrawal:" << withdrawal
					<< ";amount:" << this->_amount
					<< ";nb_withdrawals:" << this->_nbWithdrawals
					<< std::endl;
		return (1);
	}
	else
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (0);
	}	
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
				<< ";p_amount:" << this->_amount;
	this->_nbDeposits++;
	this->_amount += deposit;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	std::cout << ";deposit:" << deposit
				<< ";amount:" << this->_amount
				<< ";nb_deposits:" << this->_nbDeposits
				<< std::endl;
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
				<< ";amount:" << this->_amount
				<< ";deposits:" << this->_nbDeposits
				<< ";withdrawals:" << this->_nbWithdrawals
				<< std::endl;
}

void	Account::displayAccountsInfos( void ) //ligne
{	
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts
				<< ";total:" << Account::_totalAmount
				<< ";deposits:" << Account::_totalNbDeposits
				<< ";withdrawals:" << Account::_totalNbWithdrawals
				<< std::endl;
}

int	Account::getNbAccounts(void)
{
	return(Account::_nbAccounts);
}

Account::Account(int initial_deposit) : _amount(initial_deposit) //constructeur
{
	Account::_displayTimestamp();
	this->_accountIndex = Account::_nbAccounts;
	std::cout << "index:" << this->_accountIndex
				<< ";amount:" << this->_amount << ";created" 
				<< std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
				<< ";amount:" << this->_amount << ";closed" 
				<< std::endl;
}

