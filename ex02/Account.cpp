#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


Account::Account(void)
: _accountIndex(_nbAccounts), _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
    _nbAccounts += 1;
}

Account::Account(int initial_deposit)
: _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) //
{
    _nbAccounts += 1;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int Account::checkAmount(void) const
{
    return (this->_amount);
}

int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

void    Account::_displayTimestamp(void)
{
    // [19920104_091532]
    std::time_t result = std::time(nullptr);
    std::tm* now = std::localtime(&result);
    std::cout << "[" 
              << (now->tm_year + 1900)
              << (now->tm_mon + 1 < 10 ? "0" : "") << (now->tm_mon + 1)
              << (now->tm_mday < 10 ? "0" : "") << now->tm_mday << "_"
              << (now->tm_hour < 10 ? "0" : "") << now->tm_hour
              << (now->tm_min < 10 ? "0" : "") << now->tm_min
              << (now->tm_sec < 10 ? "0" : "") << now->tm_sec
              << "] ";
}

void    Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout<< "accounts:" << _nbAccounts << ";total:" << _totalAmount
    << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void    Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount <<
    ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void    Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
    this->_amount += deposit;
    _totalAmount += deposit;
    this->_nbDeposits += 1;
    _totalNbDeposits += 1;
    std::cout << ";deposit:" << deposit << ";amount:" << this->_amount <<
    ";nb_deposits:" << this->_nbDeposits << std::endl; 
}

bool    Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
    if (withdrawal > this->checkAmount())
    {
        std::cout << ";withdrawal:refused" << std::endl;
        return (false);
    }
    this->_amount -= withdrawal;
    _totalAmount -= withdrawal;
    this->_nbWithdrawals += 1;
    _totalNbWithdrawals += 1;
    std::cout << ";withdrawal:"<< withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:"
    << this->_nbWithdrawals << std::endl;
    return (true);
}