#include "include/Contact.hpp"

Contact::Contact()
: _firstN(""), _lastN(""), _nickN(""), _phoneNumber(""), _secret(""), _index(0)
{
}

Contact::~Contact()
{
}

// validate input, returns the input once it's correct
std::string    Contact::validateInputString()
{
    std::string name;

    std::getline(std::cin, name);
    while (std::cin.fail() || std::cin.eof() || name.length() == 0)
    {
        std::cout << "You must enter a non-empty string. Try again:\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::getline(std::cin, name);
    }
    return (name);
}


std::string   Contact::validateInputNumber()
{
    std::string nb;

    std::getline(std::cin, nb);
    while (std::cin.fail() || std::cin.eof())
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
        while (std::cin.fail() || std::cin.eof())
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

void    Contact::setFirstN()
{
    std::cout<< "First name:\n";
    std::string name = validateInputString();
    this->_firstN = name;
}

void    Contact::setLastN()
{
    std::cout<< "Last name:\n";
    std::string name = validateInputString();
    this->_lastN = name;
}

void Contact::setNickN()
{
    std::cout<< "Nick name:\n";
    std::string name = validateInputString();
    this->_nickN = name;
}

void Contact::setPhoneNumber()
{
    std::cout<< "Phone number:\n";
    std::string nb = validateInputNumber();
    this->_phoneNumber = nb;
    
}

void    Contact::setSecret()
{
    std::cout<< "Darkest secret...:\n";
    std::string secret = validateInputString();
    this->_secret = secret;
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
