#include "include/Phonebook.hpp"

Phonebook::Phonebook()
{
    contact_nb = 0;
}

Phonebook::~Phonebook()
{

}

void    Phonebook::add_contact()
{
    static  int i = 0;

    this->contacts[i % 8].set_data(i % 8);
    i++;
    this->contact_nb += 1;
};

int Phonebook::is_contact(int index)
{
    int i = 0;
    while (i < this->contact_nb && i < 8)
    {
        if (i == index - 1)
            return (1);
        i++;
    }
    return (0);
}

void    Phonebook::search_contact()
{
    int indx = 0;
    std::cout << std::setw(52) << "--------------------------------------------------" << std::endl;
    std::cout << std::setw(10) << "Index" << " | " 
    << std::setw(10) << "First name" << " | "
    << std::setw(10) << "Last name" << " | " 
    << std::setw(10) << "Nickname" << std::endl;
    std::cout << std::setw(52) << "--------------------------------------------------" << std::endl;
    for (int i =0; i < this->contact_nb; i++)
        this->contacts[i].print_data();
    std::cout << "Enter the index of the contact you want to display : ";
    std::cin >> indx;
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cerr << "Invalid input type : please enter an integer." << std::endl;
        return ;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (indx < 1 || indx > 8)
    {
        std::cin.clear();
        std::cerr << "Invalid number : index goes from 1 to 8" << std::endl;
        return ;
    }
    if (!this->is_contact(indx))
    {
        std::cerr << "Contact does not exist." << std::endl;
        return ;
    }
    std::cout << std::setw(10) << this->contacts[indx-1].get_index() << " | "
    << std::setw(10) << this->contacts[indx-1].get_fname() << " | "
    << std::setw(10) << this->contacts[indx-1].get_lname() << " | "
    << std::setw(10) << this->contacts[indx-1].get_nname() << " | " << std::endl;
};