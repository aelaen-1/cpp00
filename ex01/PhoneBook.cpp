#include "include/PhoneBook.hpp"

PhoneBook::PhoneBook()
: _contactNb(0), _nextIndex(0)
{
}

PhoneBook::~PhoneBook()
{
    std::cout << "PhoneBook has been destroyed" << std::endl;
}

std::string PhoneBook::formatColumn(std::string toFormat)
{
    if (toFormat.length() > 10)
        return (toFormat.substr(0, 9) + ".");
    return (toFormat);
}

void    PhoneBook::addContact()
{
    this->contacts[this->_nextIndex].setIndex(this->_nextIndex + 1);

    std::cout << std::setw(50) << "---------------------------------------" <<  std::endl;
    std::cout << std::setw(42) << "Fill contact information" << std::endl;
    std::cout << std::setw(50) << "---------------------------------------\n" <<  std::endl;

    this->contacts[this->_nextIndex].askForFirstN();
    this->contacts[this->_nextIndex].askForLastN();
    this->contacts[this->_nextIndex].askForNickN();
    this->contacts[this->_nextIndex].askForPhoneNumber();
    this->contacts[this->_nextIndex].askForSecret();

    this->_nextIndex = (this->_nextIndex + 1) % 8;
    this->_contactNb = std::min(this->_nextIndex, 8);
    std::cout<< "contact nb: " << this->_contactNb << std::endl;
}

void    PhoneBook::searchContact()
{
    int indx = 0;
    std::cout << std::setw(52) << "--------------------------------------------------" << std::endl;
    std::cout << std::setw(10) << "Index" << " | " 
    << std::setw(10) << "First name" << " | "
    << std::setw(10) << "Last name" << " | " 
    << std::setw(10) << "Nickname" << std::endl;
    std::cout << std::setw(52) << "--------------------------------------------------" << std::endl;
    std::cout << std::endl;

    // print all contacts
    for (int i = 0; i < this->_contactNb; i++)
    {
        std::cout << std::setw(10) <<this->contacts[i].getIndex() << " | "
        << std::setw(10) << formatColumn(this->contacts[i].getFirstN()) << " | " <<
        std::setw(10) << formatColumn(this->contacts[i].getLastN()) << " | " <<
        std::setw(10) << formatColumn(this->contacts[i].getNickN()) << std::endl;
        std::cout << std::endl;
    }
    std::cout << "Enter the index of the contact you want to display:\n";
    std::cin >> indx;
    if (std::cin.fail() || indx < 1 || indx > 8)
    {
        std::cin.clear(); // clear error flags that will prevent any input from succeeding if not cleared
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cerr << "Invalid input. Indexes go from 1 to 8" << std::endl;
        return ;
    }
    if (this->contacts[indx-1].getFirstN().size() == 0){
        std::cout << "Contact does not exist\n\n";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return ;
    }
    std::cout << std::setw(10) <<this->contacts[indx-1].getIndex() << " | "
    << std::setw(10) << formatColumn(this->contacts[indx-1].getFirstN()) << " | " <<
    std::setw(10) << formatColumn(this->contacts[indx-1].getLastN())  << " | " <<
    std::setw(10) << formatColumn(this->contacts[indx-1].getNickN()) << std::endl;
    std::cout << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

}