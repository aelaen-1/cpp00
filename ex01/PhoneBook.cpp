#include "include/PhoneBook.hpp"

Phonebook::Phonebook()
: _contactNb(0)
{
}

Phonebook::~Phonebook()
{
    std::cout << "A PhoneBook has been destroyed" << std::endl;
}
 
int Phonebook::getContactnb()
{
    return (this->_contactNb);
}

void    Phonebook::addContact()
{
    static int  i = 0;

    this->contacts[i % 8].setIndex(i % 8);
    std::cout << std::setw(40) << "-------------------------------------" << std::endl;
    std::cout << std::setw(30) << "FILL CONTACT INFO" << std::endl;
    std::cout << std::setw(40) << "-------------------------------------" << std::endl;
    std::cout << "First name: " << std::endl;
    std::cin >> this->con
    this->contacts[i % 8].setFirstN(input);

    std::cout << "Last name: " << std::endl;
    std::getline(std::cin, input);
    this->contacts[i % 8].setLastN(input);

    std::cout << "Nick name: " << std::endl;
    std::getline(std::cin, input);
    this->contacts[i % 8].setNickN(input);

    std::cout << "Phone number: " << std::endl;
    std::getline(std::cin, input);
    this->contacts[i % 8].setNickN(input);
 
    std::cout << "Darkest secret...: " << std::endl;
    std::getline(std::cin, input);
    this->contacts[i % 8].setNickN(input);

    // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void    Phonebook::searchContact()
{

}