#include "include/Contact.hpp"

Contact::Contact()
: _firstN(""), _lastN(""), _nickN(""), _phoneNumber(""), _secret(""), _index(0)
{
}

Contact::~Contact()
{
}

//setters 

void Contact::setFirstN(std::string first)
{
    this->_firstN = first;
}

void Contact::setLastN(std::string last)
{
    this->_lastN = last;
}

void Contact::setNickN(std::string nick)
{
    this->_nickN = nick;
}

void Contact::setPhoneNumber(std::string n)
{
    this->_phoneNumber = n;
}

void    Contact::setSecret(std::string s)
{
    this->_secret = s;
}

void     Contact::setIndex(int i)
{
    this->_index = i;
}

//getters 

std::string Contact::getFirstN()
{
    return (this->_firstN);
}

std::string Contact::getLastN()
{
    return (this->_lastN);
}

std::string Contact::getNickN()
{
    return (this->_nickN);
}

std::string Contact::getPhoneNumber()
{
    return (this->_phoneNumber);
}

int     Contact::getIndex()
{
    return (this->_index);
}
