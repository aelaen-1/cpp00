#ifndef PHONEBOOK_HPP
 #define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"


class PhoneBook
{
public:
    PhoneBook();
    ~PhoneBook();

    Contact     _contacts[8];

    void        _addContact();
    void        _searchContact();
    std::string _formatColumn(std::string toFormat);

private:
    int _contactNb;
    int _nextIndex;
};

#endif