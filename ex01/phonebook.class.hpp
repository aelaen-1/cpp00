#ifndef PHONEBOOK_CLASS_HPP
 #define PHONEBOOK_CLASS_HPP

#include "contact.class.hpp"
#include <iostream>
#include <iomanip>
#include <climits>


class Phonebook
{
public:
    Contact contacts[8];
    int contact_nb;
};

int     find_oldest_contact(Phonebook *phonebook);
void    fill_info(Phonebook *phonebook, int index);

#endif