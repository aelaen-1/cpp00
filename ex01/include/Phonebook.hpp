#ifndef PHONEBOOK_CLASS_HPP
 #define PHONEBOOK_CLASS_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <climits>

class Phonebook
{
public:
    Phonebook();
    ~Phonebook();
    Contact contacts[8];
    int     contact_nb;
    void    add_contact();
    int     is_contact(int index);
    void    search_contact();
};

#endif