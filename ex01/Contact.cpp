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
    this->_index = i + 1;
}

//getters 



int     Contact::getIndex()
{
    return (this->_index);
}

std::string Contact::formatFirstN()
{
    std::string toFormat = this->getFirstN();

    return(toFormat.substr(0, 9) + ".");
}

std::string Contact::formatLastN()
{
    std::string toFormat = this->getLastN();

    return(toFormat.substr(0, 9) + ".");
}

std::string Contact::formatNickN()
{
    std::string toFormat = this->getNickN();

    return(toFormat.substr(0, 9) + ".");
}
