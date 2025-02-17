#include <iostream>
#include <cstring>

int main(int ac, char **argv)
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int i = 1; i < ac; i++)
    {
        for (int j = 0; j < (int)strlen(argv[i]); j++)
        {
            if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
                argv[i][j] -= 32;
        }
        std::cout << argv[i];
    }
    std::cout << std::endl;
    return (0);
}