#include "Account.hpp"
#include <iostream>

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

static void	Account::_displayTimestamp()
{
	std::cout << "[";
	std::cout << "] ";
}

/*
** Getters
*/
static int	Account::getNbAccounts()
{
	return _nbAccounts;
}

static	int	Account::getTotalAmount()
{
	return _totalAmount;
}

static	int	Account::getNbDeposits()
{
	return _totalNbDeposits
}

static	int	Account::getNbWithdrawals()
{
	return _totalNbWithdrawals
}

/*
** Constructors
*/
Account::Account(int initial_deposit)
{

}

Account::~Account()
{

}
