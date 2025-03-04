#include "include/Contact.hpp"

Contact::Contact()
: _firstN(""), _lastN(""), _nickN(""), _phoneNumber(""), _secret(""), _index(0)
{
}

Contact::~Contact()
{
}

// validate input, returns the input once it's correct
std::string    Contact::askInputString()
{
    std::string name;

    std::getline(std::cin, name);
    while (std::cin.fail()|| !name.length()) // cin.eof() = ctrlD
    {
        std::cout << "You must enter a non-empty string. Try again:\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::getline(std::cin, name);
    }
    return (name);
}

std::string   Contact::validatePhoneNumber()
{
    std::string nb;

    std::getline(std::cin, nb);
    while (std::cin.fail() || !nb.length())
    {
        std::cout << "Invalid input. Try again:\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> nb;
    }
    unsigned long i = 0;
    while (i < nb.size())
    {   
        if (std::isdigit(nb[i]) == 0)
        {
            std::cout << "Input must only contain digital characters. Try again:\n";
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            i = 0;
        }
        std::getline(std::cin, nb);
        while (std::cin.fail())
        {
            std::cout << "Invalid input. Try again:\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin >> nb;
        }
    }
    return (nb);
}

//setters 

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
    this->_phoneNumber = validatePhoneNumber();
}

void    Contact::askForSecret()
{
    std::cout<< "Darkest secret...:\n";
    this->_secret = askInputString();
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

std::string Contact::formatColumn(std::string toFormat)
{
    if (toFormat.length() > 10)
        return (toFormat.substr(0, 9) + ".");
    return (toFormat);
}
