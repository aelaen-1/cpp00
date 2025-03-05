#include "include/Contact.hpp"

Contact::Contact()
: _index(0)
{
}

Contact::~Contact()
{
}

bool   Contact::isPhoneNumber(std::string input)
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
std::string    Contact::askInputString()
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

void    Contact::askForFirstN()
{
    std::cout<< "First name:\n";
    this->_firstN = askInputString();
}

void    Contact::askForLastN()
{
    std::cout<< "Last name:\n";
    this->_lastN = askInputString();
}

void Contact::askForNickN()
{
    std::cout<< "Nick name:\n";
    this->_nickN = askInputString();
}

void Contact::askForPhoneNumber()
{
    std::cout<< "Phone number:\n";
    this->_phoneNumber = askInputString();
    while (!this->isPhoneNumber(this->_phoneNumber))
    {
        std::cout << "Please type a valid phone number: \n";
        this->_phoneNumber = askInputString();
    }
}

void    Contact::askForSecret()
{
    std::cout<< "Darkest secret...:\n";
    this->_secret = askInputString();
}

// setters
void     Contact::setIndex(int i)
{
    this->_index = i;
}

//getters 
int     Contact::getIndex()
{
    return (this->_index);
}

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

