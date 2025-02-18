#include "include/Phonebook.hpp"

void    fill_info(Phonebook *phonebook, int index)
{
    std::cout << "First name : ";
    std::cin >> phonebook->contacts[index].f_name;
    std::cout << "Last name : ";
    std::cin >> phonebook->contacts[index].l_name;
    std::cout << "Nickname : ";
    std::cin >> phonebook->contacts[index].n_name;
    std::cout << "Phone number : ";
    std::cin >> phonebook->contacts[index].phone_number;
    std::cout << "Darkest secret : ";
    std::cin >> phonebook->contacts[index].secret;
    phonebook->contacts[index].nb = phonebook->contact_nb + 1;
}

int find_oldest_contact(Phonebook *phonebook)
{
    int lowest_index = INT_MAX;

    for (int i = 0; i < 8; i++)
    {
        
        if (phonebook->contacts[i].nb < lowest_index)
            lowest_index = phonebook->contacts[i].nb;
    }
    return (lowest_index);
}