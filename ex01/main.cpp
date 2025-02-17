#include "class.hpp"

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


void    init_phonebook(Phonebook *phonebook)
{
    phonebook->contact_nb = 0;
    for (int i = 0; i < 8; i++)
    {
        phonebook->contacts[i].f_name = "";
        phonebook->contacts[i].l_name = "";
        phonebook->contacts[i].n_name = "";
        phonebook->contacts[i].phone_number = "";
        phonebook->contacts[i].secret = "";
        phonebook->contacts[i].nb = 0;
    }
}

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

void    f_add(Phonebook *phonebook)
{
    std::cout << "Fill contact info" << std::endl;
    if (phonebook->contact_nb >= 8)
    {
        int lowest_index_in_phonebook = find_oldest_contact(phonebook);
        fill_info(phonebook, lowest_index_in_phonebook);
        return ;
    }
    else
        fill_info(phonebook, phonebook->contact_nb);
    phonebook->contact_nb += 1;
}

int main()
{
    Phonebook phonebook;
    std::string arg;

    init_phonebook(&phonebook);
    while (1)
    {
        std::cout << "Enter a command" << std::endl;
        std::cin >> arg;
        if (arg.compare("ADD") == 0)
            f_add(&phonebook);
        else if (arg.compare("SEARCH") == 0)
            return (std::cout << "to do\n", 0);
        else if (arg.compare("EXIT") == 0)
            break ;
        std::cout << "Contact number : " << phonebook.contact_nb << std::endl;
    }
    return (0); 
}
