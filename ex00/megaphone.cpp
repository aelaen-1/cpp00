#include <iostream>
#include <cstring>

// transform( InputIt first1, InputIt last1, OutputIt d_first, UnaryOp unary_op );
// std::transform applies the given function to the elements of the given input range(s),
// and stores the result in an output range starting from d_first

// TRANSFORM INTERDIT  CAR STL 
// std::string s[ac - 1];
// s[i] = (const char *)argv[i];
// std::transform(s[i].begin(), s[i].end(), s[i].begin(), ::toupper);

int main(int ac, char **argv)
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    
    for (int i = 1; i < ac; i++)
    {
        for (size_t j = 0; j < strlen(argv[i]); j++)
        {
            if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
                argv[i][j] -= 32;
        }
        std::cout << argv[i];
    }
    std::cout << std::endl;
    return (0);
}