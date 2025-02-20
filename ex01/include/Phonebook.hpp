#ifndef PHONEBOOK_CLASS_HPP
 #define PHONEBOOK_CLASS_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <climits>

class Phonebook
{
public:
    // Phonebook();
    // ~Phonebook();
    Contact contacts[8];
    void    add_contact();
    void    search_contact();
};

#endif