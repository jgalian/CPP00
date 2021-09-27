#include "Account.hpp"
#include <sys/time.h>
#include <iostream>

Account::Account()
{
	struct timeval tp;

	gettimeofday(&tp, NULL);
	std::cout << "[" << tp.tv_sec << "_" << tp.tv_usec << "] ";
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << Account::checkAmount();
	std::cout << "created" << std::endl;
}

Account::~Account()
{
	struct timeval tp;

	gettimeofday(&tp, NULL);
	std::cout << "[" << tp.tv_sec << "_" << tp.tv_usec << "] ";
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << Account::checkAmount();
	std::cout << "closed" << std::endl;
}

static void	displayAccountsInfos( void )
{
	struct timeval tp;

	gettimeofday(&tp, NULL);
	std::cout << "[" << tp.tv_sec << "_" << tp.tv_usec << "] ";
	std::cout << "accounts:" << Account::getNbAccounts();
	std::cout << ";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits();
	std::cout << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const
{
	struct timeval tp;

	gettimeofday(&tp, NULL);
	std::cout << "[" << tp.tv_sec << "_" << tp.tv_usec << "] ";
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << Account::checkAmount();
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

int	Account::checkAmount( void ) const
{
	return (Account::_amount);
}

void	makeDeposit( int deposit )
{
	int	previous_amount;
	int	amount;
	struct timeval tp;

	gettimeofday(&tp, NULL);
	previous_amount = Account::checkAmount();
	std::cout << "[" << tp.tv_sec << "_" << tp.tv_usec << "] ";
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << Account::checkAmount();
	std::cout << ";amount:" << Account::checkAmount();
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;

}

void	makeWithdrawal( int withdrawal )
{
	int	previous_amount;
	int	amount;


}
