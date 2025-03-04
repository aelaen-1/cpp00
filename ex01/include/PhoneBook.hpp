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

    Contact     contacts[8];

    void        addContact();
    void        searchContact();
    std::string formatColumn(std::string toFormat);

private:
    int _contactNb;
    int _nextIndex;
};

#endif