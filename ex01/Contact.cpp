#include "include/Contact.hpp"

Contact::Contact()
: _index(0)
{
}

Contact::~Contact()
{
}

bool   Contact::_isPhoneNumber(std::string input)
{
    unsigned long i = 0;
    while (i < input.size())
    {   
        if (std::isdigit(input[i]) == 0)
            return (false);
        i++;
    }
    return (1);
}

// askFor functions
std::string    Contact::_askInputString()
{
    std::string name;

    std::getline(std::cin, name);
    while (std::cin.fail()|| !name.length()) // cin.eof() for ctrlD
    {
        std::cout << "You must enter a non-empty string. Try again:\n";
        std::cin.clear();
        std::getline(std::cin, name);
    }
    return (name);
}

void    Contact::_askForFirstN()
{
    std::cout<< "First name:\n";
    this->_firstN = _askInputString();
}

void    Contact::_askForLastN()
{
    std::cout<< "Last name:\n";
    this->_lastN = _askInputString();
}

void Contact::_askForNickN()
{
    std::cout<< "Nick name:\n";
    this->_nickN = _askInputString();
}

void Contact::_askForPhoneNumber()
{
    std::cout<< "Phone number:\n";
    this->_phoneNumber = _askInputString();
    while (!this->_isPhoneNumber(this->_phoneNumber))
    {
        std::cout << "Please type a valid phone number: \n";
        this->_phoneNumber = _askInputString();
    }
}

void    Contact::_askForSecret()
{
    std::cout<< "Darkest secret...:\n";
    this->_secret = _askInputString();
}

// setters
void     Contact::_setIndex(int i)
{
    this->_index = i;
}

//getters 
int     Contact::_getIndex()
{
    return (this->_index);
}

std::string Contact::_getFirstN()
{
    return (this->_firstN);
}

std::string Contact::_getLastN()
{
    return (this->_lastN);
}

std::string Contact::_getNickN()
{
    return (this->_nickN);
}

