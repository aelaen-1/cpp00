#ifndef PHONEBOOK_HPP
 #define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <climits>

class PhoneBook
{
public:
    PhoneBook();
    ~PhoneBook();
    Contact contacts[8];
    int     contact_nb;
    void    add_contact();
    int     is_contact(int index);
    void    search_contact();
};

#endif