#include "include/PhoneBook.hpp"

void    selectCommandPrompt()
{
    std::cout << "---------------------------------------------------------" << std::endl;
    std::cout << "Issue one of the following commands : ADD | SEARCH | EXIT" << std::endl;
    std::cout << "---------------------------------------------------------" << std::endl;
    std::cout << "==> ";
}

int main()
{
    Phonebook phonebook;
    std::string input;

    while (1)
    {
        selectCommandPrompt();
        std::getline(std::cin, input);
        if (input.compare("ADD") == 0)
            phonebook.addContact();
        else if (input.compare("SEARCH") == 0)
            phonebook.searchContact();
        else if (input.compare("EXIT") == 0)
            break ;
    }
    return (0); 
}
