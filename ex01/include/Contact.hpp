#ifndef CLASS_HPP
 #define CLASS_HPP

#include <iostream>
#include <string>
#include <iomanip>

struct Contact
{
private:
    std::string _firstN;
    std::string _lastN;
    std::string _nickN;
    std::string _phoneNumber;
    std::string _secret;
    int _index;
public:
    Contact();
    ~Contact();

    std::string     askInputString();
    std::string     validatePhoneNumber();
    void    askForFirstN();
    void    askForLastN();
    void    askForNickN();
    void    askForPhoneNumber();
    void    askForSecret();
    void    setIndex(int i);

    std::string getFirstN();
    std::string getLastN();
    std::string getNickN();
    int     getIndex();

    std::string formatColumn(std::string toFormat);
};

#endif