#include <time.h>
#include <iostream>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	this->_amount = initial_deposit;
	this->_nbDeposits++;
}

Account::~Account() {}

int Account::getNbAccounts() {
	return (_nbAccounts);
}

int	Account::getTotalAmount(void) {
	return (_totalAmount);
}

int	Account::getNbDeposits(void) {
	return (_nbDeposits);
}

int	Account::getNbWithdrawals(void) {
	return (_nbWithdrawals);
}

void	Account::displayAccountsInfos(void) {
	Account::_displayTimestamp();
	std::cout << std::endl;
}

void	Account::makeDeposit(__attribute__((unused))int deposit) {
}

bool	Account::makeWithdrawal(__attribute__((unused))int withdrawal) {
	return (0);
}

int		Account::checkAmount(void) const {
	Account::_displayTimestamp();
	std::cout << std::endl;
	return (0);
}

void	Account::displayStatus(void) const {
	Account::_displayTimestamp();
	std::cout << std::endl;
}

void	Account::_displayTimestamp(void) {
	time_t	c_t;
	tm		*crt;
	char	t[16];

	time(&c_t);
	crt = localtime(&c_t);
	std::strftime(t, 16, "%Y%m%d_%H%M%S", crt);
	std::cout << '[' << t << ']';
}
