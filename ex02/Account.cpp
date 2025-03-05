#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


Account::Account(void)
: _accountIndex(0), _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{

}

Account::Account(int initial_deposit)
: Account()
{
    this->_amount = initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
    
}