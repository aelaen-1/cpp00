#include "include/PhoneBook.hpp"

PhoneBook::PhoneBook()
: _contactNb(0)
{
}

PhoneBook::~PhoneBook()
{
    std::cout << "A PhoneBook has been destroyed" << std::endl;
}

void    PhoneBook::addContact()
{
    static int i = 0;
    this->contacts[i % 8].setIndex(i % 8);

    std::cout << std::setw(50) << "---------------------------------------" <<  std::endl;
    std::cout << std::setw(42) << "Fill contact information" << std::endl;
    std::cout << std::setw(50) << "---------------------------------------\n" <<  std::endl;

    this->contacts[i % 8].setFirstN();
    this->contacts[i % 8].setLastN();
    this->contacts[i % 8].setNickN();
    this->contacts[i % 8].setPhoneNumber();
    this->contacts[i % 8].setSecret();
    // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    i++;
    this->_contactNb++;
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
        std::cout << this->contacts[i].getIndex() << " | "
        << this->contacts[i].formatFirstN() << " | " <<
        this->contacts[i].formatLastN() << " | " <<
        this->contacts[i].formatNickN() << std::endl;
        std::cout << std::endl;
    }
    std::cout << "Enter the index of the contact you want to display:\n";
    std::cin >> indx;
    if (std::cin.fail())
    {
        std::cin.clear(); // clear error flags that will prevent any input from succeeding if not cleared
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cerr << "Invalid input. Indexes go from 1 to 8" << std::endl;
        return ;
    }
    if (indx < 1 || indx > 8)
    {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cerr << "Invalid input. Indexes go from 1 to 8" << std::endl;
        return ;
    }
    std::cout << this->contacts[indx-1].getIndex() << " | "
    << this->contacts[indx-1].formatFirstN() << " | " <<
    this->contacts[indx-1].formatLastN() << " | " <<
    this->contacts[indx-1].formatNickN() << std::endl;
    std::cout << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

}