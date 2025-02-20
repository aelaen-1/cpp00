#include "include/Phonebook.hpp"

// Phonebook::Phonebook()
// {

// }

// Phonebook::~Phonebook()
// {

// }

void    Phonebook::add_contact()
{
    static  int i = 0;

    this->contacts[i % 8].data_setter(i % 8);
    i++;
};

void    Phonebook::search_contact()
{
    int indx = 0;
    std::cout << "Enter the index of the contact you want to display : " << std::endl;
    std::cin >> indx;
    if (indx < 1 || indx > 8)
    {
        std::cout << "Invalid index" << std::endl;
        return ;
    }
    std::cout << std::setw(10) << "Index" << " | " 
    << std::setw(10) << "First name" << " | "
    << std::setw(10) << "Last name" << " | " 
    << std::setw(10) << "Nickname" << std::endl;
    std::cout << std::setw(10) << this->contacts[indx-1].get_index() << " | "
    << std::setw(10) << this->contacts[indx-1].get_fname() << " | "
    << std::setw(10) << this->contacts[indx-1].get_lname() << " | "
    << std::setw(10) << this->contacts[indx-1].get_nname() << " | " << std::endl;
};