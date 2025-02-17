#ifndef CLASS_HPP
 #define CLASS_HPP

#include <iostream>
#include <cstring>
#include <climits>

struct Contact
{
    std::string f_name;
    std::string l_name;
    std::string n_name;
    std::string phone_number;
    std::string secret;
    int nb;
};

struct Phonebook
{
    Contact contacts[8];
    int contact_nb;
};

#endif