#include "include/PhoneBook.hpp"

Contact::Contact()
{
    this->index = 0;
}

Contact::~Contact()
{

}

void    Contact::set_data(int i)
{
    this->index = i + 1;
    std::cout << std::setw(50) << "---------------------------------------" <<  std::endl;
    std::cout << std::setw(42) << "Fill contact information" << std::endl;
    std::cout << std::setw(50) << "---------------------------------------" <<  std::endl;

    std::cout << "First name :\n";
    std::cin >> this->f_name;
    std::cout << "Last name :\n";
    std::cin >> this->l_name;
    std::cout << "Nickname :\n";
    std::cin >> this->n_name;
    std::cout << "Phone number :\n";
    std::cin >> this->phone_number;
    std::cout << "Darkest secret :\n";
    std::cin >> this->secret;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void    Contact::print_data()
{
    std::cout << std::setw(10) << this->get_index() << " | "
    << std::setw(10) << this->get_fname() << " | "
    << std::setw(10) << this->get_lname() << " | "
    << std::setw(10) << this->get_nname() << " | " << std::endl;
}

int Contact::get_index()
{
    return(this->index);
}

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