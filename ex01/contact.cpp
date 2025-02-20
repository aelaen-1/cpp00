#include "include/Phonebook.hpp"

Contact::Contact()
{
    this->index = 0; // Pourquoi pas .  au lieu de ->  ? 
}

Contact::~Contact()
{
    
}

void    Contact::data_setter(int i)
{
    this->index = i + 1;
    std::cout << "Fill contact information" << std::endl;
    std::cout << "First name : ";
    std::cin >> this->f_name;
    std::cout << "Last name : ";
    std::cin >> this->l_name;
    std::cout << "Nickname : ";
    std::cin >> this->n_name;
    std::cout << "Phone number : ";
    std::cin >> this->phone_number;
    std::cout << "Darkest secret : ";
    std::cin >> this->secret;
}

int Contact::get_index()
{
    return(this->index);
}

// std::string Contact::format_string(std::string s)
// {
//     if (s.size() > 10)
//         s = s.substr(0, 9) + ".";
//     return (s);
// }

std::string Contact::get_fname()
{
    if (this->f_name.size() > 10)
        this->f_name = this->f_name.substr(0, 9) + ".";
    return (this->f_name);
}

std::string Contact::get_lname()
{
    if (this->l_name.size() > 10)
        this->l_name = this->l_name.substr(0, 9) + ".";
    return (this->l_name);
}

std::string Contact::get_nname()
{
    if (this->n_name.size() > 10)
        this->n_name = this->n_name.substr(0, 9) + ".";
    return (this->n_name);
}