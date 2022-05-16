/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:52:41 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/16 18:36:17 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit): _amount(initial_deposit) {

	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts++;
	this->_totalAmount += this->_amount;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout 	<< "index:" << _accountIndex << ";" 
				<< "amount:" << _amount << ";created" << std::endl;
	return ;

}

Account::~Account(void) {

	Account::_displayTimestamp();
	std::cout 	<< "index:" << _accountIndex << ";" 
				<< "amount:" << _amount << ";closed" << std::endl;
	return ;
}

int	Account::getNbAccounts(void) {

	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void) {

	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void) {

	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void) {

	return (Account::_totalNbWithdrawals);
}

void	Account::makeDeposit(int deposit) {

	Account::_displayTimestamp();
	std::cout 	<< "index:" << this->_accountIndex << ";"
				<< "p_amount:" << this->_amount << ";"
				<< "deposit:" << deposit << ";"
				<< "amount:" << this->_amount + deposit << ";"
				<< "nb_deposits:" << this->_nbDeposits + 1
				<< std::endl;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal) {

	this->_amount -= withdrawal;
	if (checkAmount() == 1) {
		this->_amount += withdrawal;
		Account::_displayTimestamp();
		std::cout 	<< "index:" << this->_accountIndex << ";"
					<< "p_amount:" << this->_amount << ";"
					<< "withdrawal:refused"
					<< std::endl;
		return (false);
	}
	Account::_displayTimestamp();
	std::cout 	<< "index:" << this->_accountIndex << ";"
				<< "p_amount:" << this->_amount + withdrawal << ";"
				<< "withdrawal:" << withdrawal << ";"
				<< "amount:" << this->_amount << ";"
				<< "nb_withdrawals:" << this->_nbWithdrawals + 1
				<< std::endl;
	this->_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	this->_totalNbWithdrawals++;
	return (true);
}

int	Account::checkAmount(void) const {

	if (this->_amount < 0)
		return (1);
	return (0);
}

void	Account::_displayTimestamp(void) {

	time_t		rawtime;
	struct tm	*timeinfo;
	char		buffer [19];

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, 19, "[%Y%m%d_%H%M%S] ", timeinfo);
	std::cout << buffer;
}

void	Account::displayStatus(void) const {

	Account::_displayTimestamp();
	std::cout 	<< "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "deposits:" << this->_nbDeposits << ";"
				<< "withdrawals:" << this->_nbWithdrawals
				<< std::endl;
}

void	Account::displayAccountsInfos(void) {

	Account::_displayTimestamp();
	std::cout 	<< "accounts:" << getNbAccounts() << ";"
				<< "total:" << getTotalAmount() << ";"
				<< "deposits:" << getNbDeposits() << ";"
				<< "withdrawals:" << getNbWithdrawals()
				<< std::endl;
}
