#include "class.hpp"

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


// SEARCH : affiche le contact demandé
// ◦ Affiche les contacts enregistrés sous la forme d’une liste de 4 colonnes : index,
// first name, last name et nickname.
// ◦ Chaque colonne doit faire 10 caractères de long. Elles doivent être séparées
// par un pipe (’|’). Leur texte est aligné à droite. Si le texte dépasse la largeur
// de la colonne, il faut le tronquer et remplacer le dernier caractère affiché par
// un point (’.’).
// ◦ Ensuite, le programme demande à l’utilisateur d’entrer l’index du contact à af-
// ficher. Si l’index ou son format sont incorrects, gérez cela de manière pertinente.
// Sinon, affichez les informations du contact, une par ligne.

void    f_search(Phonebook *phonebook)
{
    const char    tab[4][10];

    int i = 0;
    int index = 0;
    std::cout << "Enter the index of the contact you want to display : " << std::endl;
    std::cin >> index;
    while (i < 8)
    {
        if (phonebook->contacts[i].nb == index)
            break ;
        i++;
    }
    tab[0] = phonebook->contacts[i].nb;
    tab[1] = phonebook->contacts[i].f_name;
    tab[2] = phonebook->contacts[i].l_name;
    tab[3] = phonebook->contacts[i].n_name;
    std::string str(tab[0]);
    std::string str(tab[1]);
    std::string str(tab[2]);
    std::string str(tab[3]);
    std::cout << tab[0] << " | " << tab[1] << " | " << tab[2] << " | " << tab[3] << std::endl;
}

int main()
{
    Phonebook phonebook;
    std::string arg;

    init_phonebook(&phonebook);
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
        std::cout << "Contact number : " << phonebook.contact_nb << std::endl;
    }
    return (0); 
}
