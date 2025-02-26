#ifndef PHONEBOOK_HPP
 #define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"


struct Phonebook
{
private:
    int _contactNb;

public:
    Phonebook();
    ~Phonebook();

    Contact contacts[8];

    int     getContactnb();
    void    addContact();
    void    searchContact();
};

#endif