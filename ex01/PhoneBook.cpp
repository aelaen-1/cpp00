#include "include/PhoneBook.hpp"

PhoneBook::PhoneBook()
: _contactNb(0), _nextIndex(0)
{
}

PhoneBook::~PhoneBook()
{
    std::cout << "PhoneBook has been destroyed" << std::endl;
}

std::string PhoneBook::_formatColumn(std::string toFormat)
{
    if (toFormat.length() > 10)
        return (toFormat.substr(0, 9) + ".");
    return (toFormat);
}

void    PhoneBook::_addContact()
{
    this->_contacts[this->_nextIndex]._setIndex(this->_nextIndex + 1);

    std::cout << std::setw(50) << "---------------------------------------" <<  std::endl;
    std::cout << std::setw(42) << "Fill contact information" << std::endl;
    std::cout << std::setw(50) << "---------------------------------------\n" <<  std::endl;

    this->_contacts[this->_nextIndex]._askForFirstN();
    this->_contacts[this->_nextIndex]._askForLastN();
    this->_contacts[this->_nextIndex]._askForNickN();
    this->_contacts[this->_nextIndex]._askForPhoneNumber();
    this->_contacts[this->_nextIndex]._askForSecret();

    this->_nextIndex = (this->_nextIndex + 1) % 8;
    this->_contactNb = std::min(this->_nextIndex, 8);
    std::cout<< "contact nb: " << this->_contactNb << std::endl;
}

void    PhoneBook::_searchContact()
{
    int indx = 0;
    std::cout << std::setw(52) << "--------------------------------------------------" << std::endl;
    std::cout << std::setw(10) << "Index" << " | " 
    << std::setw(10) << "First name" << " | "
    << std::setw(10) << "Last name" << " | " 
    << std::setw(10) << "Nickname" << std::endl;
    std::cout << std::setw(52) << "--------------------------------------------------" << std::endl;
    std::cout << std::endl;

    // print all _contacts
    for (int i = 0; i < this->_contactNb; i++)
    {
        std::cout << std::setw(10) <<this->_contacts[i]._getIndex() << " | "
        << std::setw(10) << _formatColumn(this->_contacts[i]._getFirstN()) << " | " <<
        std::setw(10) << _formatColumn(this->_contacts[i]._getLastN()) << " | " <<
        std::setw(10) << _formatColumn(this->_contacts[i]._getNickN()) << std::endl;
        std::cout << std::endl;
    }
    std::cout << "Enter the index of the contact you want to display:\n";
    std::cin >> indx;
    if (std::cin.fail() || indx < 1 || indx > 8)
    {
        std::cin.clear(); // clear error flags that will prevent any input from succeeding if not cleared
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Indexes go from 1 to 8" << std::endl;
        return ;
    }
    if (this->_contacts[indx-1]._getFirstN().size() == 0){
        std::cout << "Contact does not exist\n\n";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return ;
    }
    std::cout << std::setw(10) <<this->_contacts[indx-1]._getIndex() << " | "
    << std::setw(10) << _formatColumn(this->_contacts[indx-1]._getFirstN()) << " | " <<
    std::setw(10) << _formatColumn(this->_contacts[indx-1]._getLastN())  << " | " <<
    std::setw(10) << _formatColumn(this->_contacts[indx-1]._getNickN()) << std::endl;
    std::cout << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

}