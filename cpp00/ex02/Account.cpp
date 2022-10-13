#include <iostream>
#include <time.h>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	this->_accountIndex = Account::getNbAccounts();
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbAccounts++;
}

Account::~Account() {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << Account::checkAmount() << ";closed" << std::endl;
}

int Account::getNbAccounts() {
	return (_nbAccounts);
}

int	Account::getTotalAmount(void) {
	return (_totalAmount);
}

int	Account::getNbDeposits(void) {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void) {
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:"							\
	<< Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawals:"	\
	<< Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit) {
	Account::_displayTimestamp();
	this->_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << Account::checkAmount()		\
	<< ";deposit:" << deposit << ";amount:" << Account::checkAmount() + deposit << ";nb_deposits:" << this->_nbDeposits << std::endl;
	this->_amount += deposit;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal) {
	Account::_displayTimestamp();
	if (withdrawal > this->_amount)
	{
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << Account::checkAmount() << ";withdrawal:refused" << std::endl;
		return (true);
	}
	this->_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << Account::checkAmount()	\
	<< ";withdrawal:" << withdrawal << ";amount:" << Account::checkAmount() - withdrawal	\
	<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	return (false);
}

int		Account::checkAmount(void) const {
	return (this->_amount);
}

void	Account::displayStatus(void) const {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << Account::checkAmount()			\
	<< ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void) {
	time_t	timeStructure;
	tm		*timePointer;
	char	timeCharacters[16];

	time(&timeStructure);
	timePointer = localtime(&timeStructure);
	std::strftime(timeCharacters, 16, "%Y%m%d_%H%M%S", timePointer);
	std::cout << '[' << timeCharacters << ']';
}
