#ifndef PHONEBOOK_HPP
 #define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"


struct PhoneBook
{
private:
    int _contactNb;
public:
    PhoneBook();
    ~PhoneBook();

    Contact contacts[8];

    void    addContact();
    void    searchContact();
};

#endif