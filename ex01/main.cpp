#include "include/Phonebook.hpp"

int main ()
{
    std::string arg;
    Phonebook phonebook;

    while (1)
    {
        std::cout << "Run one of the following command : ADD | SEARCH | EXIT" << std::endl;
        std::cin >> arg;
        if (arg.compare("ADD") == 0)
            phonebook.add_contact();
        else if (arg.compare("SEARCH") == 0)
            phonebook.search_contact();
        else if (arg.compare("EXIT") == 0)
            break ;
    }
    return (0);
}