#include "Account.hpp"
#include <iostream>
#include <ctime>

/*
** Utils
*/
int	ft_strlen(std::string str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
	}
	return i;
}

void	Account::_displayTimestamp()
{
	std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);

	std::cout << "[";
	std::cout << (now->tm_year + 1900)
        << (now->tm_mon + 1)
        <<  now->tm_mday
		<< "_"
		<<  now->tm_hour
		<<  now->tm_min
		<<  now->tm_sec;
	std::cout << "] ";
}

/*
** Init
*/
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/*
** Getters
*/
int	Account::getNbAccounts()
{
	return _nbAccounts;
}

int	Account::getTotalAmount()
{
	return _totalAmount;
}

int	Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:"<< _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:"<< _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

/*
** Setters
*/
void	Account::makeDeposit(int deposit)
{
	//static
	++_totalNbDeposits;
	_totalAmount += deposit;

	//non static
	++_nbDeposits;
	_amount += deposit;

	_displayTimestamp();
	std::cout << "index:"<< _accountIndex << ";p_amount:" << _amount  - deposit<< ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits <<std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{

	if (withdrawal > _amount)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused\n";
		return false;
	}

	//static
	++_totalNbWithdrawals;
	_totalAmount -= withdrawal;

	//non static
	++_nbWithdrawals;
	_amount -= withdrawal;

	_displayTimestamp();
	std::cout << "index:"<< _accountIndex << ";p_amount:" << _amount  + withdrawal<< ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals <<std::endl;
	return true;
}

/*
** Constructors
*/
Account::Account(int initial_deposit)
{
	//non static
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	//static
	++_nbAccounts;
	_totalAmount += initial_deposit;

	_displayTimestamp();
	std::cout << "index:"<< _accountIndex << ";amount:" << _amount << ";created\n";
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:"<< _accountIndex << ";amount:" << _amount << ";closed\n";
}
