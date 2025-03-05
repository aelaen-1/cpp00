#include "include/PhoneBook.hpp"

void    selectCommandPrompt()
{
    std::cout << "Run one of the following commands : ADD | SEARCH | EXIT" << std::endl;
    std::cout << "_______________________________________________________" << std::endl;
    std::cout << std::endl;
    std::cout << "==> ";
}

int main()
{
    PhoneBook phonebook;
    std::string input;

    while (1)
    {
        selectCommandPrompt();
        std::getline(std::cin, input);
        if (input.compare("ADD") == 0)
            phonebook._addContact();
        else if (input.compare("SEARCH") == 0)
            phonebook._searchContact();
        else if (input.compare("EXIT") == 0)
            break ;
    }
    return (0); 
}
