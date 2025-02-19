#include "include/Phonebook.hpp"

static void    init_phonebook(Phonebook *phonebook)
{
    phonebook->contact_nb = 0;
    for (int i = 0; i < 8; i++)
        phonebook->contacts[i].nb = 0;
}

void    f_add(Phonebook *phonebook)
{
    std::cout << "Fill contact info" << std::endl;
    if (phonebook->contact_nb >= 8)
    {
        int lowest_index_in_phonebook = find_oldest_contact(phonebook);
        fill_info(phonebook, lowest_index_in_phonebook);
    }
    else
        fill_info(phonebook, phonebook->contact_nb);
    phonebook->contact_nb += 1;
}

static std::string format_string(std::string str)
{
    if (str.length() > 10)
    {
        str = str.substr(0, 9);
        str += ".";
    }
    return (str);
}

// setw : set field width
void    f_search(Phonebook *phonebook)
{
    int i = 0;
    int index = 0;
    std::cout << "Enter the index of the contact you want to display : " << std::endl;
    std::cin >> index;
    if (index < 1 || index > phonebook->contact_nb)
    {
        std::cout << "Invalid index" << std::endl;
        return ;
    }
    std::cout << std::setw(10) << "Index" << " | " 
    << std::setw(10) << "First name" << " | "
    << std::setw(10) << "Last name" << " | " 
    << std::setw(10) << "Nickname" << std::endl;
    while (i < 8)
    {
        if (phonebook->contacts[i].nb == index)
            break ;
        i++;
    }
    std::cout << std::setw(10) << phonebook->contacts[i].nb << " | " 
    << std::setw(10) << format_string(phonebook->contacts[i].f_name) << " | "
    << std::setw(10) << format_string(phonebook->contacts[i].l_name) << " | " 
    << std::setw(10) << format_string(phonebook->contacts[i].n_name) << std::endl;
}

int main()
{
    Phonebook phonebook;
    // takes user input
    std::string arg;
    
    // set contact_nb and indexes to 0
    init_phonebook(&phonebook);
    // loop until user enters EXIT
    while (1)
    {
        std::cout << "Enter one of the following commands : ADD | SEARCH | EXIT" << std::endl;
        std::cin >> arg;
        if (arg.compare("ADD") == 0)
            f_add(&phonebook);
        else if (arg.compare("SEARCH") == 0)
            f_search(&phonebook);
        else if (arg.compare("EXIT") == 0)
            break ;
    }
    return (0); 
}
